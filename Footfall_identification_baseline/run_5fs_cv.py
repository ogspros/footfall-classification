#!/usr/bin/env python3
"""
Run a 5-fold stratified CV baseline experiment aligned to 001_footsteps_rf.

What this script does:
1. Uses the canonical file order from baseline `audio/1/summary.csv`.
2. Rebuilds the same 80/20 stratified split used in `001_footsteps_rf`
   with `random_state=42`.
3. Caches one scalogram per unique WAV with the existing baseline CWT code.
4. Trains the baseline Wavelet-CNN on 5 stratified folds of the training split.
5. Evaluates every fold model on the fixed held-out test split and averages
   test-set probabilities across folds.
6. Optionally compares the baseline predictions against the fine-tuned exp001
   XGBoost model and runs the paired bootstrap from notebook step 10c.
"""

from __future__ import annotations

import argparse
import json
import random
import sys
from pathlib import Path
from typing import Dict, Iterable, Tuple

import joblib
import numpy as np
import pandas as pd
import torch
from sklearn.metrics import (
    accuracy_score,
    balanced_accuracy_score,
    confusion_matrix,
    f1_score,
    precision_score,
    recall_score,
)
from sklearn.model_selection import StratifiedKFold, train_test_split
from sklearn.utils import resample
from torch.utils.data import DataLoader
from tqdm import tqdm


PROJECT_ROOT = Path(__file__).resolve().parent
DEFAULT_BASELINE_DATA = Path(
    "/home/ubuntu-wsl/Projects/Dottorato/Archive/Footfall_identification_baseline/audio"
)
DEFAULT_REFERENCE_ROOT = Path("/home/ubuntu-wsl/Projects/Dottorato/001_footsteps_rf")
DEFAULT_OUTPUT_DIR = PROJECT_ROOT / "output" / "5fs_cv"


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="5-fold stratified CV baseline experiment aligned to 001_footsteps_rf."
    )
    parser.add_argument(
        "--data-root",
        type=Path,
        default=DEFAULT_BASELINE_DATA if DEFAULT_BASELINE_DATA.exists() else PROJECT_ROOT / "audio",
        help="Baseline audio root containing allocation folders (default: archive copy if present).",
    )
    parser.add_argument(
        "--output-dir",
        type=Path,
        default=DEFAULT_OUTPUT_DIR,
        help="Directory for models, cached scalograms, metrics, and bootstrap outputs.",
    )
    parser.add_argument(
        "--reference-root",
        type=Path,
        default=DEFAULT_REFERENCE_ROOT,
        help="001_footsteps_rf root used for the paired comparison against exp001.",
    )
    parser.add_argument(
        "--epochs",
        type=int,
        default=30,
        help="Training epochs per fold.",
    )
    parser.add_argument(
        "--batch-size",
        type=int,
        default=64,
        help="Batch size used for train/val/test loaders.",
    )
    parser.add_argument(
        "--lr",
        type=float,
        default=1e-3,
        help="Learning rate for the baseline CNN.",
    )
    parser.add_argument(
        "--num-workers",
        type=int,
        default=0,
        help="PyTorch DataLoader workers. Keep 0 for safest reproducibility.",
    )
    parser.add_argument(
        "--device",
        choices=["auto", "cpu", "cuda"],
        default="auto",
        help="Training device.",
    )
    parser.add_argument(
        "--n-bootstrap",
        type=int,
        default=10_000,
        help="Number of paired bootstrap replicates.",
    )
    parser.add_argument(
        "--ci-level",
        type=float,
        default=0.95,
        help="Bootstrap confidence level.",
    )
    parser.add_argument(
        "--skip-bootstrap",
        action="store_true",
        help="Skip the exp001 vs baseline paired bootstrap.",
    )
    parser.add_argument(
        "--skip-reference",
        action="store_true",
        help="Skip loading exp001 artefacts from 001_footsteps_rf.",
    )
    return parser.parse_args()


def set_reproducibility(seed: int) -> None:
    random.seed(seed)
    np.random.seed(seed)
    torch.manual_seed(seed)
    if torch.cuda.is_available():
        torch.cuda.manual_seed_all(seed)
    if hasattr(torch.backends, "cudnn"):
        torch.backends.cudnn.deterministic = True
        torch.backends.cudnn.benchmark = False


def resolve_device(device_name: str) -> torch.device:
    if device_name == "cpu":
        return torch.device("cpu")
    if device_name == "cuda":
        return torch.device("cuda")
    return torch.device("cuda" if torch.cuda.is_available() else "cpu")


def prepare_baseline_modules(args: argparse.Namespace):
    sys.path.insert(0, str(PROJECT_ROOT))

    import src.config as config

    config.DATA_PATH = args.data_root
    config.OUTPUT_PATH = args.output_dir
    config.SCALOGRAM_PATH = args.output_dir / "legacy_scalograms"
    config.GLOBAL_STATS_PATH = args.output_dir / "global_stats.npy"
    config.BATCH_SIZE = args.batch_size
    config.EPOCHS = args.epochs
    config.OUTPUT_PATH.mkdir(parents=True, exist_ok=True)
    config.SCALOGRAM_PATH.mkdir(parents=True, exist_ok=True)

    # data_utils loads this file at import time; the values are not used by the
    # current preprocessing path, but keeping the file in place avoids a noisy
    # scan against legacy paths.
    if not config.GLOBAL_STATS_PATH.exists():
        np.save(config.GLOBAL_STATS_PATH, np.array([0.0, 1.0], dtype=np.float32))

    from src.data_utils import (
        RandomShift,
        ScalogramDatasetPrecomputed,
        apply_lowpass_filter,
        create_scalogram,
        load_wav_file,
    )
    from src.models import create_model_wavelet_cnn
    from src.train_utils import fit_model

    return (
        config,
        RandomShift,
        ScalogramDatasetPrecomputed,
        apply_lowpass_filter,
        create_scalogram,
        load_wav_file,
        create_model_wavelet_cnn,
        fit_model,
    )


def load_canonical_manifest(data_root: Path, cache_dir: Path) -> pd.DataFrame:
    summary_path = data_root / "1" / "summary.csv"
    if not summary_path.exists():
        raise FileNotFoundError(f"Canonical summary not found: {summary_path}")

    summary_df = pd.read_csv(summary_path)
    summary_df["relative_path"] = summary_df["filename"]
    summary_df["filename"] = summary_df["filename"].map(lambda value: Path(value).name)
    summary_df["audio_path"] = summary_df["relative_path"].map(lambda rel: str(data_root / "1" / rel))
    summary_df["cache_path"] = summary_df["filename"].map(
        lambda name: str(cache_dir / Path(name).with_suffix(".npy"))
    )
    summary_df["sample_id"] = summary_df["filename"].map(lambda name: Path(name).stem)
    summary_df["row_id"] = np.arange(len(summary_df), dtype=int)

    missing_audio = [path for path in summary_df["audio_path"] if not Path(path).exists()]
    if missing_audio:
        raise FileNotFoundError(f"Missing audio files. First missing path: {missing_audio[0]}")

    return summary_df[
        ["row_id", "sample_id", "filename", "relative_path", "audio_path", "cache_path", "category", "target", "fold"]
    ].copy()


def ensure_scalogram_cache(
    manifest_df: pd.DataFrame,
    load_wav_file,
    apply_lowpass_filter,
    create_scalogram,
) -> None:
    cache_paths = [Path(path) for path in manifest_df["cache_path"]]
    missing_rows = manifest_df[[not path.exists() for path in cache_paths]]
    if missing_rows.empty:
        print(f"Scalogram cache already complete: {len(manifest_df)} files")
        return

    print(f"Caching {len(missing_rows)} missing scalograms...")
    for row in tqdm(missing_rows.itertuples(index=False), total=len(missing_rows), desc="Caching"):
        cache_path = Path(row.cache_path)
        cache_path.parent.mkdir(parents=True, exist_ok=True)

        signal = load_wav_file(row.audio_path)
        if signal is None or len(signal) == 0:
            raise RuntimeError(f"Failed to load audio: {row.audio_path}")

        filtered = apply_lowpass_filter(signal)
        scalogram = create_scalogram(filtered)

        mean_clip = float(np.mean(scalogram))
        std_clip = float(np.std(scalogram))
        if std_clip > 1e-8:
            scalogram = (scalogram - mean_clip) / std_clip

        scal_rgb = np.stack([scalogram] * 3, axis=0).astype(np.float32)
        np.save(cache_path, scal_rgb)


def compute_metric_dict(y_true: np.ndarray, y_pred: np.ndarray, labels: Iterable[int]) -> Dict[str, float]:
    labels = list(labels)
    return {
        "Accuracy": float(accuracy_score(y_true, y_pred)),
        "Balanced Accuracy": float(balanced_accuracy_score(y_true, y_pred)),
        "Precision (Macro)": float(
            precision_score(y_true, y_pred, labels=labels, average="macro", zero_division=0)
        ),
        "Recall (Macro)": float(
            recall_score(y_true, y_pred, labels=labels, average="macro", zero_division=0)
        ),
        "F1 (Macro)": float(f1_score(y_true, y_pred, labels=labels, average="macro", zero_division=0)),
        "F1 (Weighted)": float(
            f1_score(y_true, y_pred, labels=labels, average="weighted", zero_division=0)
        ),
    }


@torch.no_grad()
def predict_proba(model: torch.nn.Module, dataloader: DataLoader, device: torch.device) -> Tuple[np.ndarray, np.ndarray]:
    model.eval()
    all_probs = []
    all_targets = []

    for inputs, labels in dataloader:
        inputs = inputs.to(device, non_blocking=device.type == "cuda")
        logits = model(inputs)
        probs = torch.softmax(logits, dim=1).cpu().numpy()
        all_probs.append(probs)
        all_targets.append(labels.numpy())

    return np.vstack(all_probs), np.concatenate(all_targets)


def make_loader(dataset, batch_size: int, shuffle: bool, num_workers: int, seed: int, device: torch.device) -> DataLoader:
    generator = torch.Generator()
    generator.manual_seed(seed)
    return DataLoader(
        dataset,
        batch_size=batch_size,
        shuffle=shuffle,
        num_workers=num_workers,
        pin_memory=device.type == "cuda",
        generator=generator,
    )


def run_cv_experiment(
    manifest_df: pd.DataFrame,
    output_dir: Path,
    config,
    RandomShift,
    ScalogramDatasetPrecomputed,
    create_model_wavelet_cnn,
    fit_model,
    device: torch.device,
    batch_size: int,
    num_workers: int,
    lr: float,
) -> Tuple[pd.DataFrame, pd.DataFrame, pd.DataFrame]:
    y_all = manifest_df["target"]
    idx_all = manifest_df.index.to_numpy()

    train_idx, test_idx, y_train, y_test = train_test_split(
        idx_all,
        y_all,
        test_size=0.20,
        stratify=y_all,
        random_state=42,
    )

    train_df = manifest_df.loc[train_idx].copy()
    test_df = manifest_df.loc[test_idx].copy().reset_index(drop=True)
    test_df["test_row"] = np.arange(len(test_df), dtype=int)

    split_manifest = manifest_df.copy()
    split_manifest["split"] = "unused"
    split_manifest.loc[train_idx, "split"] = "train"
    split_manifest.loc[test_idx, "split"] = "test"
    split_manifest.to_csv(output_dir / "split_manifest.csv", index=False)
    test_df.to_csv(output_dir / "baseline_test_manifest.csv", index=False)

    class_labels = sorted(manifest_df["target"].unique().tolist())
    class_names = {
        int(row.target): row.category
        for row in manifest_df[["target", "category"]].drop_duplicates().itertuples(index=False)
    }

    skf = StratifiedKFold(n_splits=5, shuffle=True, random_state=42)
    per_fold_rows = []
    probas_aligned = []

    test_dataset = ScalogramDatasetPrecomputed(
        test_df["cache_path"].tolist(),
        test_df["target"].to_numpy(),
        transform=None,
    )
    test_loader = make_loader(
        test_dataset,
        batch_size=batch_size,
        shuffle=False,
        num_workers=num_workers,
        seed=42,
        device=device,
    )

    print(f"Training 5-fold CV on {len(train_df)} training samples")
    print(f"Evaluating on fixed held-out test split of {len(test_df)} samples")

    for fold_idx, (inner_train_pos, inner_val_pos) in enumerate(
        skf.split(train_df["cache_path"], train_df["target"]),
        start=1,
    ):
        fold_train_df = train_df.iloc[inner_train_pos].copy()
        fold_val_df = train_df.iloc[inner_val_pos].copy()

        train_dataset = ScalogramDatasetPrecomputed(
            fold_train_df["cache_path"].tolist(),
            fold_train_df["target"].to_numpy(),
            transform=RandomShift,
        )
        val_dataset = ScalogramDatasetPrecomputed(
            fold_val_df["cache_path"].tolist(),
            fold_val_df["target"].to_numpy(),
            transform=None,
        )

        train_loader = make_loader(
            train_dataset,
            batch_size=batch_size,
            shuffle=True,
            num_workers=num_workers,
            seed=42 + fold_idx,
            device=device,
        )
        val_loader = make_loader(
            val_dataset,
            batch_size=batch_size,
            shuffle=False,
            num_workers=num_workers,
            seed=100 + fold_idx,
            device=device,
        )

        model = create_model_wavelet_cnn(num_classes=len(class_labels))
        model_name = f"wavelet_cnn_5fs_fold{fold_idx}"

        print(f"\nFold {fold_idx}/5")
        model, _ = fit_model(
            model,
            train_loader,
            val_loader,
            num_epochs=config.EPOCHS,
            lr=lr,
            device=device,
            model_name=model_name,
        )

        fold_proba, fold_targets = predict_proba(model, test_loader, device)
        if not np.array_equal(fold_targets, test_df["target"].to_numpy()):
            raise ValueError("Test target order drifted during fold evaluation.")

        probas_aligned.append(fold_proba)
        fold_pred = np.argmax(fold_proba, axis=1)
        fold_metrics = compute_metric_dict(test_df["target"].to_numpy(), fold_pred, class_labels)
        per_fold_rows.append({"fold": fold_idx, **fold_metrics})

        print(f"  Fold Test Accuracy   : {fold_metrics['Accuracy']:.4f}")
        print(f"  Fold Test F1 (Macro) : {fold_metrics['F1 (Macro)']:.4f}")

    probas_mean = np.mean(np.stack(probas_aligned, axis=0), axis=0)
    y_pred_mean = np.argmax(probas_mean, axis=1)
    y_true_test = test_df["target"].to_numpy()

    aggregated_metrics = compute_metric_dict(y_true_test, y_pred_mean, class_labels)
    cm = confusion_matrix(y_true_test, y_pred_mean, labels=class_labels)

    per_fold_df = pd.DataFrame(per_fold_rows)
    per_fold_df.to_csv(output_dir / "baseline_per_fold_metrics.csv", index=False)

    aggregated_df = pd.DataFrame(
        {"Metric": list(aggregated_metrics.keys()), "Value": list(aggregated_metrics.values())}
    )
    aggregated_df.to_csv(output_dir / "baseline_aggregated_metrics.csv", index=False)

    cm_df = pd.DataFrame(
        cm,
        index=[class_names[label] for label in class_labels],
        columns=[class_names[label] for label in class_labels],
    )
    cm_df.index.name = "True"
    cm_df.to_csv(output_dir / "baseline_confusion_matrix.csv")

    predictions_df = test_df[["test_row", "filename", "category", "target"]].copy()
    predictions_df["baseline_pred"] = y_pred_mean
    predictions_df["baseline_correct"] = (predictions_df["target"] == predictions_df["baseline_pred"]).astype(int)
    predictions_df.to_csv(output_dir / "baseline_test_predictions.csv", index=False)

    payload = {
        "method": "5-fold stratified CV on training split with averaged test-set probabilities",
        "random_state": 42,
        "n_train": int(len(train_df)),
        "n_test": int(len(test_df)),
        "n_folds": 5,
        "class_labels": class_labels,
        "class_names": {str(key): value for key, value in class_names.items()},
        "metrics": aggregated_metrics,
    }
    with open(output_dir / "baseline_run_summary.json", "w", encoding="utf-8") as handle:
        json.dump(payload, handle, indent=2)

    print("\nAggregated baseline test metrics")
    for metric_name, metric_value in aggregated_metrics.items():
        print(f"  {metric_name:<20} {metric_value:.4f}")

    return test_df, predictions_df, aggregated_df


def load_exp001_predictions(reference_root: Path, expected_targets: np.ndarray) -> Tuple[np.ndarray, pd.Series]:
    test_csv = reference_root / "data" / "processed" / "exp01_fresh_test.csv"
    features_txt = reference_root / "results" / "finetuned_models" / "selected_features_k17.txt"
    model_pkl = reference_root / "results" / "finetuned_models" / "xgb_finetuned_k17.pkl"

    for path in [test_csv, features_txt, model_pkl]:
        if not path.exists():
            raise FileNotFoundError(f"Missing exp001 artefact: {path}")

    test_df = pd.read_csv(test_csv)
    with open(features_txt, "r", encoding="utf-8") as handle:
        selected_features = [line.strip() for line in handle if line.strip()]

    y_true = test_df["target"].to_numpy()
    if not np.array_equal(y_true, expected_targets):
        raise ValueError("exp001 test targets do not match the rebuilt baseline test split.")

    model = joblib.load(model_pkl)
    y_pred = model.predict(test_df[selected_features])
    return np.asarray(y_pred), test_df["category"]


def save_reference_comparison(
    output_dir: Path,
    test_df: pd.DataFrame,
    y_pred_reference: np.ndarray,
    y_pred_baseline: np.ndarray,
) -> None:
    y_true = test_df["target"].to_numpy()
    labels = sorted(np.unique(y_true).tolist())

    observed_reference = compute_metric_dict(y_true, y_pred_reference, labels)
    observed_baseline = compute_metric_dict(y_true, y_pred_baseline, labels)

    comparison_rows = []
    for metric_name in observed_reference:
        ref_value = observed_reference[metric_name]
        baseline_value = observed_baseline[metric_name]
        comparison_rows.append(
            {
                "Metric": metric_name,
                "Observed exp001": ref_value,
                "Observed baseline": baseline_value,
                "Observed Δ (baseline − exp001)": baseline_value - ref_value,
            }
        )

    comparison_df = pd.DataFrame(comparison_rows)
    comparison_df.to_csv(output_dir / "comparison_exp001_vs_baseline.csv", index=False)

    predictions_df = test_df[["test_row", "filename", "category", "target"]].copy()
    predictions_df["exp001_pred"] = y_pred_reference
    predictions_df["baseline_pred"] = y_pred_baseline
    predictions_df["exp001_correct"] = (predictions_df["target"] == predictions_df["exp001_pred"]).astype(int)
    predictions_df["baseline_correct"] = (predictions_df["target"] == predictions_df["baseline_pred"]).astype(int)
    predictions_df.to_csv(output_dir / "predictions_exp001_vs_baseline.csv", index=False)


def run_paired_bootstrap(
    output_dir: Path,
    y_true: np.ndarray,
    y_pred_reference: np.ndarray,
    y_pred_baseline: np.ndarray,
    n_bootstrap: int,
    ci_level: float,
) -> None:
    labels = sorted(np.unique(y_true).tolist())
    observed_reference = compute_metric_dict(y_true, y_pred_reference, labels)
    observed_baseline = compute_metric_dict(y_true, y_pred_baseline, labels)
    metric_names = list(observed_reference.keys())

    bootstrap_rows = []
    for replicate in range(n_bootstrap):
        sample_true, sample_reference, sample_baseline = resample(
            y_true,
            y_pred_reference,
            y_pred_baseline,
            replace=True,
            n_samples=len(y_true),
            stratify=y_true,
            random_state=42 + replicate,
        )

        metrics_reference = compute_metric_dict(sample_true, sample_reference, labels)
        metrics_baseline = compute_metric_dict(sample_true, sample_baseline, labels)

        for metric_name in metric_names:
            value_reference = metrics_reference[metric_name]
            value_baseline = metrics_baseline[metric_name]
            bootstrap_rows.append(
                {
                    "replicate": replicate,
                    "metric": metric_name,
                    "exp001": value_reference,
                    "baseline": value_baseline,
                    "diff_baseline_minus_exp001": value_baseline - value_reference,
                }
            )

    bootstrap_df = pd.DataFrame(bootstrap_rows)
    bootstrap_df.to_csv(output_dir / "bootstrap_metrics_exp001_vs_baseline.csv", index=False)

    alpha = 1.0 - ci_level
    summary_rows = []

    for metric_name in metric_names:
        metric_boot = bootstrap_df[bootstrap_df["metric"] == metric_name]
        reference_values = metric_boot["exp001"].to_numpy()
        baseline_values = metric_boot["baseline"].to_numpy()
        diff_values = metric_boot["diff_baseline_minus_exp001"].to_numpy()

        prob_baseline_le_reference = float(np.mean(diff_values <= 0))
        two_sided_sign_probability = float(
            2 * min(np.mean(diff_values <= 0), np.mean(diff_values >= 0))
        )

        summary_rows.append(
            {
                "Metric": metric_name,
                "Observed exp001": observed_reference[metric_name],
                "Observed baseline": observed_baseline[metric_name],
                "Observed Δ (baseline − exp001)": observed_baseline[metric_name]
                - observed_reference[metric_name],
                "Bootstrap mean Δ": float(np.mean(diff_values)),
                "Bootstrap std Δ": float(np.std(diff_values, ddof=1)),
                "exp001 CI low": float(np.quantile(reference_values, alpha / 2)),
                "exp001 CI high": float(np.quantile(reference_values, 1 - alpha / 2)),
                "baseline CI low": float(np.quantile(baseline_values, alpha / 2)),
                "baseline CI high": float(np.quantile(baseline_values, 1 - alpha / 2)),
                "Δ CI low": float(np.quantile(diff_values, alpha / 2)),
                "Δ CI high": float(np.quantile(diff_values, 1 - alpha / 2)),
                "P(Δ <= 0)": prob_baseline_le_reference,
                "Two-sided sign probability": min(two_sided_sign_probability, 1.0),
            }
        )

    summary_df = pd.DataFrame(summary_rows).set_index("Metric")
    summary_df.to_csv(output_dir / "bootstrap_summary_exp001_vs_baseline.csv")

    payload = {
        "method": "stratified paired bootstrap over held-out test rows",
        "n_bootstrap": n_bootstrap,
        "ci_level": ci_level,
        "random_state": 42,
        "n_test_samples": int(len(y_true)),
        "class_labels": [int(label) for label in labels],
        "class_counts": {str(int(label)): int(np.sum(y_true == label)) for label in labels},
        "summary": summary_df.reset_index().to_dict(orient="records"),
    }
    with open(output_dir / "bootstrap_exp001_vs_baseline.json", "w", encoding="utf-8") as handle:
        json.dump(payload, handle, indent=2)

    print("\nStratified paired bootstrap: exp001 vs baseline")
    print(f"Bootstrap replicates: {n_bootstrap:,} | CI level: {ci_level:.0%}")
    print(summary_df.to_string(float_format="%.4f"))


def main() -> None:
    args = parse_args()
    args.output_dir.mkdir(parents=True, exist_ok=True)
    cache_dir = args.output_dir / "scalograms_cache"
    cache_dir.mkdir(parents=True, exist_ok=True)

    set_reproducibility(42)
    device = resolve_device(args.device)

    (
        config,
        RandomShift,
        ScalogramDatasetPrecomputed,
        apply_lowpass_filter,
        create_scalogram,
        load_wav_file,
        create_model_wavelet_cnn,
        fit_model,
    ) = prepare_baseline_modules(args)

    print(f"Baseline data root : {args.data_root}")
    print(f"Output directory   : {args.output_dir}")
    print(f"Reference root     : {args.reference_root}")
    print(f"Device             : {device}")

    manifest_df = load_canonical_manifest(args.data_root, cache_dir)
    manifest_df.to_csv(args.output_dir / "canonical_manifest.csv", index=False)

    ensure_scalogram_cache(
        manifest_df,
        load_wav_file=load_wav_file,
        apply_lowpass_filter=apply_lowpass_filter,
        create_scalogram=create_scalogram,
    )

    test_df, baseline_predictions_df, _ = run_cv_experiment(
        manifest_df=manifest_df,
        output_dir=args.output_dir,
        config=config,
        RandomShift=RandomShift,
        ScalogramDatasetPrecomputed=ScalogramDatasetPrecomputed,
        create_model_wavelet_cnn=create_model_wavelet_cnn,
        fit_model=fit_model,
        device=device,
        batch_size=args.batch_size,
        num_workers=args.num_workers,
        lr=args.lr,
    )

    if args.skip_reference:
        print("\nReference comparison skipped (--skip-reference).")
        return

    y_true = test_df["target"].to_numpy()
    y_pred_baseline = baseline_predictions_df["baseline_pred"].to_numpy()
    y_pred_exp001, _ = load_exp001_predictions(args.reference_root, y_true)

    save_reference_comparison(
        output_dir=args.output_dir,
        test_df=test_df,
        y_pred_reference=y_pred_exp001,
        y_pred_baseline=y_pred_baseline,
    )

    if args.skip_bootstrap:
        print("\nBootstrap skipped (--skip-bootstrap).")
        return

    run_paired_bootstrap(
        output_dir=args.output_dir,
        y_true=y_true,
        y_pred_reference=y_pred_exp001,
        y_pred_baseline=y_pred_baseline,
        n_bootstrap=args.n_bootstrap,
        ci_level=args.ci_level,
    )


if __name__ == "__main__":
    main()
