# %% [markdown]
# # Same-hardware deployment benchmark
#
# Batch-size-one CPU latency for the two deployed paths, starting from the same
# loaded, resampled, low-pass-filtered 6 s waveform. Disk I/O is excluded.

# %% Imports and editable settings
from __future__ import annotations

import json
import os
import platform
import time
from copy import deepcopy
from math import gcd
from pathlib import Path

# Set these before importing numerical libraries.
N_THREADS = 1
for variable in (
    "OMP_NUM_THREADS",
    "MKL_NUM_THREADS",
    "OPENBLAS_NUM_THREADS",
    "NUMEXPR_NUM_THREADS",
):
    os.environ[variable] = str(N_THREADS)

import antropy as ant
import fcwt
import joblib
import numpy as np
import pandas as pd
import soundfile as sf
import torch
import torch.nn as nn
import torch.nn.functional as F
from scipy.signal import butter, filtfilt, resample_poly
from statsmodels.regression.linear_model import OLS
from statsmodels.tsa.stattools import acovf, levinson_durbin
from statsmodels.tsa.tsatools import add_trend, lagmat
from tsfresh import extract_features
from tsfresh.feature_extraction import feature_calculators
from tsfresh.feature_extraction.settings import from_columns

if "__file__" in globals():
    PROJECT_ROOT = Path(__file__).resolve().parents[1]
else:
    PROJECT_ROOT = Path.cwd().resolve()
    if PROJECT_ROOT.name == "notebooks":
        PROJECT_ROOT = PROJECT_ROOT.parent
BASELINE_ROOT = PROJECT_ROOT.parent / "Footfall_identification_baseline"

XGB_MODEL_PATH = PROJECT_ROOT / "results_ext/finetuned_models/xgb_finetuned_k24.pkl"
FEATURES_PATH = PROJECT_ROOT / "results_ext/finetuned_models/selected_features_k24.txt"
CNN_CHECKPOINT_PATH = BASELINE_ROOT / "output/5fs_cv/wavelet_cnn_5fs_fold1.pt"
TEST_MANIFEST_PATH = BASELINE_ROOT / "output/5fs_cv/baseline_test_manifest.csv"
RESULTS_DIR = PROJECT_ROOT / "results_ext/deployment_benchmark"

N_SAMPLES = None  # None uses the complete held-out test set (338 signals).
N_WARMUP = 5
N_PROFILE = 30
SEED = 42
SAMPLE_RATE = 800
LOWPASS_CUTOFF = 250.0
IMG_SIZE = 224

torch.set_num_threads(N_THREADS)
try:
    torch.set_num_interop_threads(N_THREADS)
except RuntimeError:
    pass  # The interactive kernel may already have initialized its thread pool.


# %% Load artifacts and held-out signals
required_paths = [
    XGB_MODEL_PATH,
    FEATURES_PATH,
    CNN_CHECKPOINT_PATH,
    TEST_MANIFEST_PATH,
]
missing = [path for path in required_paths if not path.exists()]
if missing:
    raise FileNotFoundError("Missing benchmark input(s):\n" + "\n".join(map(str, missing)))

selected_features = [
    line.strip() for line in FEATURES_PATH.read_text(encoding="utf-8").splitlines() if line.strip()
]
tsfresh_features = [name for name in selected_features if name.startswith("value__")]
tsfresh_settings = from_columns(tsfresh_features)["value"]
optimized_tsfresh_settings = deepcopy(tsfresh_settings)
for calculator in (
    "augmented_dickey_fuller",
    "permutation_entropy",
    "partial_autocorrelation",
):
    optimized_tsfresh_settings.pop(calculator)

xgb_model = joblib.load(XGB_MODEL_PATH)
xgb_model.named_steps["clf"].set_params(n_jobs=N_THREADS)

manifest = pd.read_csv(TEST_MANIFEST_PATH)
manifest["audio_path"] = manifest.apply(
    lambda row: str(BASELINE_ROOT / "audio/1" / row["relative_path"]), axis=1
)
if not manifest["audio_path"].map(lambda value: Path(value).exists()).all():
    raise FileNotFoundError("At least one held-out WAV listed in the manifest is missing.")

n_samples = len(manifest) if N_SAMPLES is None else min(N_SAMPLES, len(manifest))
benchmark_samples = manifest.sample(n=n_samples, random_state=SEED).reset_index(drop=True)
print(f"Benchmarking {n_samples} held-out signals with {N_THREADS} CPU thread.")


# %% Shared signal preprocessing (excluded from both timed paths)
filter_b, filter_a = butter(
    4, LOWPASS_CUTOFF / (0.5 * SAMPLE_RATE), btype="low"
)


def load_signal(path: str | Path) -> np.ndarray:
    signal, sample_rate = sf.read(path, always_2d=False)
    if signal.ndim == 2:
        signal = signal.mean(axis=1)
    signal = signal.astype(np.float32)
    if sample_rate != SAMPLE_RATE:
        divisor = gcd(int(sample_rate), SAMPLE_RATE)
        signal = resample_poly(
            signal, SAMPLE_RATE // divisor, int(sample_rate) // divisor
        ).astype(np.float32)
    return filtfilt(filter_b, filter_a, signal).astype(np.float32)


signals = [load_signal(path) for path in benchmark_samples["audio_path"]]


# %% XGBoost path: reference and equivalent optimized feature extraction
ADF_NAME = 'value__augmented_dickey_fuller__attr_"teststat"__autolag_"AIC"'


def extract_tsfresh_subset(signal: np.ndarray, settings: dict) -> dict[str, float]:
    long_frame = pd.DataFrame(
        {
            "id": np.zeros(signal.size, dtype=np.int8),
            "time": np.arange(signal.size, dtype=np.int32),
            "value": signal,
        }
    )
    extracted = extract_features(
        long_frame,
        column_id="id",
        column_sort="time",
        column_value="value",
        default_fc_parameters=settings,
        n_jobs=0,
        disable_progressbar=True,
    )
    return extracted.iloc[0].replace([np.inf, -np.inf], np.nan).fillna(0.0).to_dict()


def add_fractal_features(values: dict[str, float], signal: np.ndarray) -> None:
    signal_64 = signal.astype(np.float64)
    values["higuchi_fd"] = float(ant.higuchi_fd(signal_64, kmax=10))
    values["petrosian_fd"] = float(ant.petrosian_fd(signal_64))


def make_feature_vector(signal: np.ndarray) -> np.ndarray:
    """Original selected-only tsfresh implementation."""
    values = extract_tsfresh_subset(signal, tsfresh_settings)
    add_fractal_features(values, signal)
    return np.asarray([[values[name] for name in selected_features]], dtype=np.float64)


def fast_adf_teststat(signal: np.ndarray) -> float:
    """Exact AIC lag search using one QR decomposition instead of repeated OLS fits."""
    x = np.asarray(signal, dtype=np.float64)
    if x.size < 4 or x.max() == x.min():
        return np.nan

    max_lag = int(np.ceil(12.0 * np.power(x.size / 100.0, 0.25)))
    max_lag = min(x.size // 2 - 2, max_lag)
    differences = np.diff(x)

    lagged = lagmat(differences[:, None], max_lag, trim="both", original="in")
    n_obs = lagged.shape[0]
    lagged[:, 0] = x[-n_obs - 1 : -1]
    target = differences[-n_obs:]
    full_design = add_trend(lagged, "c", prepend=True)
    first_lag_column = full_design.shape[1] - lagged.shape[1] + 1

    q_matrix, _ = np.linalg.qr(full_design, mode="reduced")
    projections = q_matrix.T @ target
    residual_ss = target @ target - np.cumsum(projections * projections)
    residual_ss = np.maximum(residual_ss, np.finfo(float).tiny)
    column_counts = np.arange(first_lag_column, first_lag_column + max_lag + 1)
    aic = n_obs * np.log(residual_ss[column_counts - 1] / n_obs) + 2 * column_counts
    used_lag = int(column_counts[np.argmin(aic)] - first_lag_column)

    lagged = lagmat(differences[:, None], used_lag, trim="both", original="in")
    n_obs = lagged.shape[0]
    lagged[:, 0] = x[-n_obs - 1 : -1]
    target = differences[-n_obs:]
    design = add_trend(lagged[:, : used_lag + 1], "c")
    return float(OLS(target, design).fit().tvalues[0])


def fast_permutation_entropy(signal: np.ndarray, dimension: int) -> float:
    windows = np.asarray(signal)[
        np.arange(signal.size - dimension + 1)[:, None] + np.arange(dimension)
    ]
    ranks = np.argsort(np.argsort(windows, axis=1), axis=1)
    codes = ranks @ (dimension ** np.arange(dimension))
    counts = np.bincount(codes)
    probabilities = counts[counts > 0] / len(codes)
    return float(-np.sum(probabilities * np.log(probabilities)))


def fast_partial_autocorrelation(signal: np.ndarray) -> np.ndarray:
    autocovariance = acovf(signal, adjusted=True, fft=False, nlag=4)
    return levinson_durbin(autocovariance, nlags=4, isacov=True)[2]


def make_feature_vector_optimized(signal: np.ndarray) -> np.ndarray:
    values = extract_tsfresh_subset(signal, optimized_tsfresh_settings)
    values[ADF_NAME] = fast_adf_teststat(signal)
    values["value__permutation_entropy__dimension_5__tau_1"] = fast_permutation_entropy(
        signal, 5
    )
    values["value__permutation_entropy__dimension_6__tau_1"] = fast_permutation_entropy(
        signal, 6
    )
    partial = fast_partial_autocorrelation(signal)
    values["value__partial_autocorrelation__lag_3"] = float(partial[3])
    values["value__partial_autocorrelation__lag_4"] = float(partial[4])
    add_fractal_features(values, signal)
    return np.asarray([[values[name] for name in selected_features]], dtype=np.float64)


def run_xgb(signal: np.ndarray, extractor=make_feature_vector) -> tuple[float, float, np.ndarray, int]:
    start = time.perf_counter_ns()
    features = extractor(signal)
    after_features = time.perf_counter_ns()
    prediction = int(xgb_model.predict(features)[0])
    end = time.perf_counter_ns()
    return (
        (after_features - start) / 1e6,
        (end - after_features) / 1e6,
        features,
        prediction,
    )


# %% CNN path: CWT scalogram, then one trained CNN forward pass
class WaveletCNN(nn.Module):
    def __init__(self, n_classes: int = 4):
        super().__init__()
        self.conv1 = nn.Conv2d(3, 32, kernel_size=3, padding=1)
        self.conv2 = nn.Conv2d(32, 64, kernel_size=3, padding=1)
        self.conv3 = nn.Conv2d(64, 128, kernel_size=3, padding=1)
        self.bn1 = nn.BatchNorm2d(32)  # Retained to match the saved architecture; unused in forward.
        self.bn2 = nn.BatchNorm2d(64)
        self.pool = nn.MaxPool2d(2, 2)
        self.drop2d = nn.Dropout2d(0.25)
        self.fc1 = nn.Linear(28 * 28 * 128, 64)
        self.drop1d = nn.Dropout(0.5)
        self.fc2 = nn.Linear(64, n_classes)

    def forward(self, x: torch.Tensor) -> torch.Tensor:
        x = self.pool(F.relu(self.conv1(x)))
        x = self.pool(F.relu(self.conv2(x)))
        x = self.drop2d(self.pool(F.relu(self.conv3(x))))
        x = self.drop1d(F.relu(self.fc1(torch.flatten(x, 1))))
        return self.fc2(x)


cnn_model = WaveletCNN()
cnn_model.load_state_dict(
    torch.load(CNN_CHECKPOINT_PATH, map_location="cpu", weights_only=True)
)
cnn_model.eval()

morlet = fcwt.Morlet(2.0)
scales = fcwt.Scales(
    morlet, fcwt.FCWT_LINFREQS, SAMPLE_RATE, 1, LOWPASS_CUTOFF, IMG_SIZE
)
cwt = fcwt.FCWT(morlet, N_THREADS, False, True)


def make_scalogram_tensor(signal: np.ndarray) -> torch.Tensor:
    output = np.zeros((IMG_SIZE, signal.size), dtype=np.complex64)
    cwt.cwt(signal.astype(np.float32), scales, output)
    scalogram = np.log1p(np.abs(output))
    scalogram = scalogram[:, : IMG_SIZE * 21].reshape(IMG_SIZE, IMG_SIZE, 21).max(axis=2)
    std = float(scalogram.std())
    if std > 1e-8:
        scalogram = (scalogram - float(scalogram.mean())) / std
    rgb = np.repeat(scalogram[np.newaxis, :, :], 3, axis=0).astype(np.float32)
    return torch.from_numpy(rgb).unsqueeze(0)


@torch.inference_mode()
def run_cnn(signal: np.ndarray) -> tuple[float, float]:
    start = time.perf_counter_ns()
    tensor = make_scalogram_tensor(signal)
    after_scalogram = time.perf_counter_ns()
    cnn_model(tensor)
    end = time.perf_counter_ns()
    return (after_scalogram - start) / 1e6, (end - after_scalogram) / 1e6


# %% Warm up, benchmark, and summarize
for _ in range(N_WARMUP):
    run_xgb(signals[0])
    run_xgb(signals[0], make_feature_vector_optimized)
    run_cnn(signals[0])

rows = []
for index, (row, signal) in enumerate(zip(benchmark_samples.itertuples(), signals)):
    # Rotate order to reduce systematic thermal/order effects.
    if index % 2 == 0:
        reference_ms, reference_xgb_ms, reference_values, reference_prediction = run_xgb(
            signal
        )
        optimized_ms, optimized_xgb_ms, optimized_values, optimized_prediction = run_xgb(
            signal, make_feature_vector_optimized
        )
        cwt_ms, cnn_ms = run_cnn(signal)
    else:
        cwt_ms, cnn_ms = run_cnn(signal)
        optimized_ms, optimized_xgb_ms, optimized_values, optimized_prediction = run_xgb(
            signal, make_feature_vector_optimized
        )
        reference_ms, reference_xgb_ms, reference_values, reference_prediction = run_xgb(
            signal
        )
    rows.append(
        {
            "filename": row.filename,
            "category": row.category,
            "reference_feature_extraction_ms": reference_ms,
            "reference_xgb_inference_ms": reference_xgb_ms,
            "reference_xgb_total_ms": reference_ms + reference_xgb_ms,
            "optimized_feature_extraction_ms": optimized_ms,
            "optimized_xgb_inference_ms": optimized_xgb_ms,
            "optimized_xgb_total_ms": optimized_ms + optimized_xgb_ms,
            "cwt_scalogram_ms": cwt_ms,
            "cnn_inference_ms": cnn_ms,
            "cnn_total_ms": cwt_ms + cnn_ms,
            "max_feature_difference": float(np.max(np.abs(reference_values - optimized_values))),
            "predictions_match": reference_prediction == optimized_prediction,
        }
    )

latencies = pd.DataFrame(rows)
stages = {
    "Reference feature extraction": "reference_feature_extraction_ms",
    "Reference XGBoost total": "reference_xgb_total_ms",
    "Optimized feature extraction": "optimized_feature_extraction_ms",
    "XGBoost inference": "optimized_xgb_inference_ms",
    "Optimized XGBoost total": "optimized_xgb_total_ms",
    "CNN CWT scalogram": "cwt_scalogram_ms",
    "CNN inference": "cnn_inference_ms",
    "CNN total": "cnn_total_ms",
}
summary = pd.DataFrame(
    [
        {
            "stage": stage,
            "median_ms": latencies[column].median(),
            "q1_ms": latencies[column].quantile(0.25),
            "q3_ms": latencies[column].quantile(0.75),
            "p95_ms": latencies[column].quantile(0.95),
            "throughput_events_per_s": 1000.0 / latencies[column].median(),
        }
        for stage, column in stages.items()
    ]
)

RESULTS_DIR.mkdir(parents=True, exist_ok=True)
latencies.to_csv(RESULTS_DIR / "per_signal_latency.csv", index=False)
summary.to_csv(RESULTS_DIR / "latency_summary.csv", index=False)

verification = {
    "maximum_feature_difference": float(latencies["max_feature_difference"].max()),
    "all_feature_vectors_close": bool(
        (latencies["max_feature_difference"] < 1e-10).all()
    ),
    "all_predictions_match": bool(latencies["predictions_match"].all()),
}
(RESULTS_DIR / "optimization_verification.json").write_text(
    json.dumps(verification, indent=2), encoding="utf-8"
)
if not verification["all_feature_vectors_close"] or not verification["all_predictions_match"]:
    raise AssertionError("Optimized feature extraction changed model inputs or predictions.")


def cpu_model() -> str:
    cpuinfo = Path("/proc/cpuinfo")
    if cpuinfo.exists():
        for line in cpuinfo.read_text(encoding="utf-8").splitlines():
            if line.startswith("model name"):
                return line.split(":", 1)[1].strip()
    return platform.processor() or "unknown"


metadata = {
    "cpu": cpu_model(),
    "platform": platform.platform(),
    "threads": N_THREADS,
    "batch_size": 1,
    "n_signals": n_samples,
    "warmup_runs": N_WARMUP,
    "sample_rate_hz": SAMPLE_RATE,
    "signal_duration_s": float(np.median([signal.size for signal in signals]) / SAMPLE_RATE),
    "xgb_model": str(XGB_MODEL_PATH.relative_to(PROJECT_ROOT)),
    "cnn_checkpoint": str(CNN_CHECKPOINT_PATH),
    "timing_scope": "path-specific representation plus inference; shared loading/resampling/filtering excluded",
}
(RESULTS_DIR / "hardware.json").write_text(json.dumps(metadata, indent=2), encoding="utf-8")

print(summary.to_string(index=False, float_format=lambda value: f"{value:.3f}"))
print(f"\nOptimization verification: {verification}")
print(f"\nSaved results to {RESULTS_DIR}")


# %% Calculator-level profile and plots
def elapsed_ms(function, *args) -> float:
    start = time.perf_counter_ns()
    function(*args)
    return (time.perf_counter_ns() - start) / 1e6


def reference_adf(signal: np.ndarray):
    return list(
        feature_calculators.augmented_dickey_fuller(
            signal, [{"attr": "teststat", "autolag": "AIC"}]
        )
    )


def reference_permutation_entropy(signal: np.ndarray):
    return (
        feature_calculators.permutation_entropy(signal, tau=1, dimension=5),
        feature_calculators.permutation_entropy(signal, tau=1, dimension=6),
    )


def optimized_permutation_entropy(signal: np.ndarray):
    return fast_permutation_entropy(signal, 5), fast_permutation_entropy(signal, 6)


def reference_partial_autocorrelation(signal: np.ndarray):
    return list(
        feature_calculators.partial_autocorrelation(
            signal, [{"lag": 3}, {"lag": 4}]
        )
    )


calculator_pairs = {
    "ADF (AIC lag search)": (reference_adf, fast_adf_teststat),
    "Permutation entropy (d=5,6)": (
        reference_permutation_entropy,
        optimized_permutation_entropy,
    ),
    "Partial autocorrelation (lags 3,4)": (
        reference_partial_autocorrelation,
        fast_partial_autocorrelation,
    ),
}
profile_rows = []
for calculator_name, (reference_function, optimized_function) in calculator_pairs.items():
    reference_times = []
    optimized_times = []
    for signal in signals[: min(N_PROFILE, len(signals))]:
        reference_times.append(elapsed_ms(reference_function, signal))
        optimized_times.append(elapsed_ms(optimized_function, signal))
    for implementation, times in (
        ("Reference", reference_times),
        ("Optimized", optimized_times),
    ):
        profile_rows.append(
            {
                "calculator": calculator_name,
                "implementation": implementation,
                "median_ms": float(np.median(times)),
                "q1_ms": float(np.quantile(times, 0.25)),
                "q3_ms": float(np.quantile(times, 0.75)),
            }
        )

calculator_profile = pd.DataFrame(profile_rows)
calculator_profile.to_csv(RESULTS_DIR / "calculator_profile.csv", index=False)

import matplotlib.pyplot as plt

totals = [
    ("Reference\nfeatures + XGBoost", "reference_xgb_total_ms"),
    ("Optimized\nfeatures + XGBoost", "optimized_xgb_total_ms"),
    ("CWT + Wavelet-CNN", "cnn_total_ms"),
]
labels = [label for label, _ in totals]
medians = np.array([latencies[column].median() for _, column in totals])
q1 = np.array([latencies[column].quantile(0.25) for _, column in totals])
q3 = np.array([latencies[column].quantile(0.75) for _, column in totals])

fig, ax = plt.subplots(figsize=(7.0, 3.5))
bars = ax.barh(labels, medians, xerr=np.vstack([medians - q1, q3 - medians]), capsize=3)
ax.bar_label(bars, labels=[f"{value:.1f} ms" for value in medians], padding=4)
ax.set_xlabel("Median latency per 6 s segment (ms; error bars show IQR)")
ax.set_xlim(0, medians.max() * 1.18)
fig.tight_layout()
fig.savefig(RESULTS_DIR / "pipeline_latency.png", dpi=180)
fig.savefig(RESULTS_DIR / "pipeline_latency.pdf")
plt.close(fig)

pivot = calculator_profile.pivot(
    index="calculator", columns="implementation", values="median_ms"
).loc[list(calculator_pairs)]
fig, ax = plt.subplots(figsize=(7.0, 3.5))
pivot.plot.barh(ax=ax, logx=True)
ax.set_xlabel("Median calculator latency (ms, log scale)")
ax.set_ylabel("")
ax.legend(frameon=False)
fig.tight_layout()
fig.savefig(RESULTS_DIR / "feature_bottlenecks.png", dpi=180)
fig.savefig(RESULTS_DIR / "feature_bottlenecks.pdf")
plt.close(fig)

print("\nCalculator profile")
print(calculator_profile.to_string(index=False, float_format=lambda value: f"{value:.3f}"))
