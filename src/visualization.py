"""
Visualization: PDF figures, LaTeX tables, and C code export.
"""
import json
import shutil
from pathlib import Path
from typing import Any, Dict, List, Optional, Tuple

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import shap
import joblib

from . import config
from .features import humanize_feature_name


# ============================================================
# PDF FIGURE EXPORT
# ============================================================

def setup_publication_style():
    """Configure matplotlib for publication-quality figures."""
    plt.rcParams.update({
        "font.family": "serif",
        "font.size": 10,
        "axes.labelsize": 10,
        "axes.titlesize": 11,
        "legend.fontsize": 9,
        "xtick.labelsize": 9,
        "ytick.labelsize": 9,
        "figure.dpi": 300,
    })


def reset_style():
    """Reset matplotlib to defaults."""
    plt.rcdefaults()


def save_pdf(fig: plt.Figure, filename: str, output_dir: Optional[Path] = None) -> bool:
    """
    Save figure as PDF.
    
    Args:
        fig: Matplotlib figure
        filename: Output filename (without extension)
        output_dir: Output directory (default: config.LATEX_FIGURES_DIR)
        
    Returns:
        True if successful
    """
    if output_dir is None:
        output_dir = config.LATEX_FIGURES_DIR
    output_dir.mkdir(parents=True, exist_ok=True)
    
    filepath = output_dir / f"{filename}.pdf"
    try:
        fig.savefig(filepath, format='pdf', bbox_inches='tight', dpi=300)
        return True
    except Exception as e:
        print(f"Error saving {filename}.pdf: {e}")
        return False


def plot_k_path(k_summary: pd.DataFrame, k_selection: Dict,
                zoomed: bool = True, output_dir: Optional[Path] = None,
                save: bool = True) -> plt.Figure:
    """
    Plot k-path CV performance curve with markers.
    
    Args:
        k_summary: DataFrame with k, mean_score, std_score
        k_selection: Dict with best_k, k_1se, threshold_1se, etc.
        zoomed: If True, zoom to relevant region
        output_dir: Output directory for PDF
        save: If True, save to PDF
        
    Returns:
        Matplotlib figure
    """
    setup_publication_style()
    
    fig, ax = plt.subplots(figsize=(12, 5))
    
    ax.plot(k_summary['k'], k_summary['mean_score'], 'b-', linewidth=2, alpha=0.7)
    ax.fill_between(k_summary['k'],
                    k_summary['mean_score'] - k_summary['std_score'],
                    k_summary['mean_score'] + k_summary['std_score'],
                    alpha=0.15, color='blue', label='±1 Std')
    
    # 1SE threshold
    threshold = k_selection['threshold_1se']
    ax.axhline(y=threshold, color='orange', linestyle=':', alpha=0.8, linewidth=1.5)
    ax.annotate(f'{threshold:.2f}', xy=(0, threshold), xycoords=('axes fraction', 'data'),
                xytext=(-8, 0), textcoords='offset points',
                fontsize=9, color='orange', fontweight='bold', ha='right', va='center')
    
    # Best k
    best_k = k_selection['best_k']
    best_score = k_selection['best_score']
    ax.axvline(x=best_k, color='red', linestyle='--', alpha=0.7, label=f'Best k={best_k}')
    ax.scatter([best_k], [best_score], color='red', s=100, zorder=5, marker='o')
    
    # 1SE k
    k_1se = k_selection['k_1se']
    score_1se = k_selection['score_1se']
    ax.axvline(x=k_1se, color='orange', linestyle='--', alpha=0.7, label=f'1SE k={k_1se}')
    ax.scatter([k_1se], [score_1se], color='orange', s=100, zorder=5, marker='s')
    
    ax.set_xlabel('Number of Features (k)')
    ax.set_ylabel('F1 Macro Score')
    ax.set_title('RFE Feature Elimination Path' if not zoomed else 'Minimum Equivalent Feature Set Selection')
    ax.legend(loc='lower right')
    ax.grid(True, alpha=0.3)
    
    if zoomed:
        k_min = max(1, min(k_1se, best_k) - 10)
        k_max = min(len(k_summary), best_k + 20)
        ax.set_xlim(k_min, k_max)
    
    plt.tight_layout()
    
    if save:
        filename = "k_path_cv" if zoomed else "full_k_path_cv"
        save_pdf(fig, filename, output_dir)
    
    reset_style()
    return fig


def plot_importance_bar(importance_df: pd.DataFrame, importance_col: str,
                        title: str, xlabel: str, color: str = 'darkorange',
                        std_col: Optional[str] = None,
                        output_dir: Optional[Path] = None,
                        filename: Optional[str] = None,
                        save: bool = True) -> plt.Figure:
    """
    Plot horizontal bar chart for feature importance.
    
    Args:
        importance_df: DataFrame with feature_short and importance columns
        importance_col: Column name for importance values
        title: Plot title
        xlabel: X-axis label
        color: Bar color
        std_col: Column for error bars (optional)
        output_dir: Output directory
        filename: Output filename
        save: If True, save to PDF
        
    Returns:
        Matplotlib figure
    """
    setup_publication_style()
    
    fig, ax = plt.subplots(figsize=(5, max(4, len(importance_df) * 0.25)))
    
    y_pos = np.arange(len(importance_df))
    xerr = importance_df[std_col].values if std_col and std_col in importance_df.columns else None
    
    ax.barh(y_pos, importance_df[importance_col].values,
            xerr=xerr, align='center', alpha=0.8, color=color, capsize=2)
    ax.set_yticks(y_pos)
    ax.set_yticklabels(importance_df['feature_short'].values, fontsize=8)
    ax.invert_yaxis()
    ax.set_xlabel(xlabel)
    ax.set_title(title)
    ax.grid(True, alpha=0.3, axis='x')
    
    plt.tight_layout()
    
    if save and filename:
        save_pdf(fig, filename, output_dir)
    
    reset_style()
    return fig


def plot_ranking_comparison(ranking_df: pd.DataFrame,
                            output_dir: Optional[Path] = None,
                            save: bool = True) -> plt.Figure:
    """Plot grouped bar chart comparing feature rankings across methods."""
    setup_publication_style()
    
    fig, ax = plt.subplots(figsize=(6, max(4, len(ranking_df) * 0.25)))
    
    x = np.arange(len(ranking_df))
    width = 0.25
    
    ax.barh(x - width, ranking_df['rank_impurity'].values, width,
            label='Impurity', alpha=0.8, color='darkorange')
    ax.barh(x, ranking_df['rank_permutation'].values, width,
            label='Permutation', alpha=0.8, color='teal')
    ax.barh(x + width, ranking_df['rank_shap'].values, width,
            label='SHAP', alpha=0.8, color='forestgreen')
    
    ax.set_yticks(x)
    ax.set_yticklabels(ranking_df['feature_short'].values, fontsize=8)
    ax.invert_yaxis()
    ax.set_xlabel('Rank')
    ax.set_title('Feature Importance Ranking Comparison')
    ax.legend(loc='lower right', fontsize=8)
    ax.grid(True, alpha=0.3, axis='x')
    
    plt.tight_layout()
    
    if save:
        save_pdf(fig, "ranking_comparison", output_dir)
    
    reset_style()
    return fig


def plot_confusion_matrix(cm: np.ndarray, class_labels: List[str],
                          normalized: bool = False,
                          k: Optional[int] = None,
                          output_dir: Optional[Path] = None,
                          save: bool = True) -> plt.Figure:
    """
    Plot confusion matrix.
    
    Args:
        cm: Confusion matrix array
        class_labels: List of class names
        normalized: If True, normalize by row
        k: Number of features (for title)
        output_dir: Output directory
        save: If True, save to PDF
        
    Returns:
        Matplotlib figure
    """
    setup_publication_style()
    
    if normalized:
        cm_plot = cm.astype('float') / cm.sum(axis=1)[:, np.newaxis]
    else:
        cm_plot = cm
    
    fig, ax = plt.subplots(figsize=(4.5, 4))
    
    im = ax.imshow(cm_plot, cmap='Blues', aspect='auto',
                   vmin=0, vmax=1 if normalized else None)
    ax.set_xticks(np.arange(len(class_labels)))
    ax.set_yticks(np.arange(len(class_labels)))
    ax.set_xticklabels(class_labels, fontsize=9)
    ax.set_yticklabels(class_labels, fontsize=9)
    ax.set_xlabel('Predicted')
    ax.set_ylabel('True')
    
    title = 'Confusion Matrix'
    if normalized:
        title += ' - Normalized'
    if k:
        title += f' (k={k})'
    ax.set_title(title)
    
    # Add text
    thresh = 0.5 if normalized else cm.max() / 2
    for i in range(len(class_labels)):
        for j in range(len(class_labels)):
            val = cm_plot[i, j]
            text = f'{val:.1%}' if normalized else f'{int(val)}'
            ax.text(j, i, text, ha='center', va='center',
                    color='white' if val > thresh else 'black', fontsize=9 if normalized else 10)
    
    plt.colorbar(im, ax=ax, shrink=0.8, label='Proportion' if normalized else 'Count')
    plt.tight_layout()
    
    if save:
        filename = "confusion_matrix_normalized" if normalized else "confusion_matrix_counts"
        save_pdf(fig, filename, output_dir)
    
    reset_style()
    return fig


def plot_shap_by_class(shap_per_class_df: pd.DataFrame,
                       output_dir: Optional[Path] = None,
                       save: bool = True) -> plt.Figure:
    """Plot SHAP importance by class."""
    setup_publication_style()
    
    class_cols = [c for c in shap_per_class_df.columns if c != 'feature_short']
    feature_labels = shap_per_class_df['feature_short'].values if 'feature_short' in shap_per_class_df.columns else [humanize_feature_name(f) for f in shap_per_class_df.index]
    
    fig, ax = plt.subplots(figsize=(6, max(4, len(shap_per_class_df) * 0.3)))
    
    x = np.arange(len(shap_per_class_df))
    width = 0.8 / len(class_cols)
    colors = ['#1f77b4', '#ff7f0e', '#2ca02c', '#d62728']
    
    for i, class_name in enumerate(class_cols):
        ax.barh(x + i * width - 0.4 + width/2, shap_per_class_df[class_name].values,
                width, label=class_name, alpha=0.8, color=colors[i % len(colors)])
    
    ax.set_yticks(x)
    ax.set_yticklabels(feature_labels, fontsize=7)
    ax.invert_yaxis()
    ax.set_xlabel('Mean |SHAP Value|')
    ax.set_title('SHAP Feature Importance by Class')
    ax.legend(loc='lower right', title='Class', fontsize=8)
    ax.grid(True, alpha=0.3, axis='x')
    
    plt.tight_layout()
    
    if save:
        save_pdf(fig, "shap_importance_by_class", output_dir)
    
    reset_style()
    return fig


def plot_shap_beeswarm(shap_values: List[np.ndarray], explainer: Any,
                       X_test_scaled: np.ndarray, humanized_features: List[str],
                       class_names: List[str],
                       output_dir: Optional[Path] = None,
                       save: bool = True) -> List[plt.Figure]:
    """
    Generate SHAP beeswarm plots for each class.
    
    Returns:
        List of figures
    """
    if output_dir is None:
        output_dir = config.LATEX_FIGURES_DIR
    
    figures = []
    k = len(humanized_features)
    
    for class_idx, class_name in enumerate(class_names):
        shap_exp = shap.Explanation(
            values=shap_values[class_idx],
            base_values=explainer.expected_value[class_idx],
            data=X_test_scaled,
            feature_names=humanized_features
        )
        
        fig, ax = plt.subplots(figsize=(10, max(4, k * 0.35)))
        shap.plots.beeswarm(shap_exp, show=False, max_display=k)
        plt.title(f'SHAP Beeswarm - {class_name}')
        plt.tight_layout()
        
        if save:
            filepath = output_dir / f"shap_beeswarm_{class_name}.pdf"
            plt.savefig(filepath, format='pdf', bbox_inches='tight', dpi=300)
        
        figures.append(fig)
        plt.close()
    
    return figures


def export_all_figures(output_dir: Optional[Path] = None, verbose: bool = True) -> Dict[str, bool]:
    """
    Export all publication figures from saved data.
    
    Args:
        output_dir: Output directory
        verbose: Print progress
        
    Returns:
        Dict mapping filename to success status
    """
    if output_dir is None:
        output_dir = config.LATEX_FIGURES_DIR
    output_dir.mkdir(parents=True, exist_ok=True)
    
    if verbose:
        print("Loading saved data...")
    
    results = {}
    
    # Load data
    k_summary = pd.read_csv(config.RFE_DIR / "rfe_k_path_summary.csv")
    with open(config.RFE_DIR / "rfe_k_selection.json", 'r') as f:
        k_selection = json.load(f)
    
    impurity_df = pd.read_csv(config.IMPORTANCE_DIR / "impurity_importance.csv")
    perm_df = pd.read_csv(config.IMPORTANCE_DIR / "permutation_importance.csv")
    shap_df = pd.read_csv(config.IMPORTANCE_DIR / "shap_importance.csv")
    ranking_df = pd.read_csv(config.IMPORTANCE_DIR / "ranking_comparison.csv")
    shap_per_class_df = pd.read_csv(config.IMPORTANCE_DIR / "shap_importance_per_class.csv", index_col=0)
    
    cm_df = pd.read_csv(config.METRICS_DIR / "confusion_matrix_final.csv", index_col=0)
    cm = cm_df.values.astype(int)
    class_labels = list(cm_df.index)
    
    k_1se = k_selection['k_1se']
    
    # Generate figures
    try:
        fig = plot_k_path(k_summary, k_selection, zoomed=True, output_dir=output_dir)
        plt.close(fig)
        results['k_path_cv'] = True
        if verbose:
            print("  ✓ k_path_cv.pdf")
    except Exception as e:
        results['k_path_cv'] = False
        if verbose:
            print(f"  ✗ k_path_cv.pdf: {e}")
    
    try:
        fig = plot_k_path(k_summary, k_selection, zoomed=False, output_dir=output_dir)
        plt.close(fig)
        results['full_k_path_cv'] = True
        if verbose:
            print("  ✓ full_k_path_cv.pdf")
    except Exception as e:
        results['full_k_path_cv'] = False
        if verbose:
            print(f"  ✗ full_k_path_cv.pdf: {e}")
    
    try:
        fig = plot_importance_bar(impurity_df, 'importance', 'XGBoost Feature Importance (Impurity-based)',
                                  'Importance (Gain)', 'darkorange', filename='impurity_importance', output_dir=output_dir)
        plt.close(fig)
        results['impurity_importance'] = True
        if verbose:
            print("  ✓ impurity_importance.pdf")
    except Exception as e:
        results['impurity_importance'] = False
        if verbose:
            print(f"  ✗ impurity_importance.pdf: {e}")
    
    try:
        imp_col = 'importance_mean' if 'importance_mean' in perm_df.columns else 'importance'
        std_col = 'importance_std' if 'importance_std' in perm_df.columns else None
        fig = plot_importance_bar(perm_df, imp_col, 'Permutation Feature Importance',
                                  'Importance (Mean Accuracy Decrease)', 'teal', std_col,
                                  filename='permutation_importance', output_dir=output_dir)
        plt.close(fig)
        results['permutation_importance'] = True
        if verbose:
            print("  ✓ permutation_importance.pdf")
    except Exception as e:
        results['permutation_importance'] = False
        if verbose:
            print(f"  ✗ permutation_importance.pdf: {e}")
    
    try:
        fig = plot_importance_bar(shap_df, 'importance', 'SHAP Feature Importance',
                                  'Mean |SHAP Value|', 'forestgreen',
                                  filename='shap_importance_bar', output_dir=output_dir)
        plt.close(fig)
        results['shap_importance_bar'] = True
        if verbose:
            print("  ✓ shap_importance_bar.pdf")
    except Exception as e:
        results['shap_importance_bar'] = False
        if verbose:
            print(f"  ✗ shap_importance_bar.pdf: {e}")
    
    try:
        fig = plot_ranking_comparison(ranking_df, output_dir=output_dir)
        plt.close(fig)
        results['ranking_comparison'] = True
        if verbose:
            print("  ✓ ranking_comparison.pdf")
    except Exception as e:
        results['ranking_comparison'] = False
        if verbose:
            print(f"  ✗ ranking_comparison.pdf: {e}")
    
    try:
        fig = plot_confusion_matrix(cm, class_labels, normalized=False, k=k_1se, output_dir=output_dir)
        plt.close(fig)
        results['confusion_matrix_counts'] = True
        if verbose:
            print("  ✓ confusion_matrix_counts.pdf")
    except Exception as e:
        results['confusion_matrix_counts'] = False
        if verbose:
            print(f"  ✗ confusion_matrix_counts.pdf: {e}")
    
    try:
        fig = plot_confusion_matrix(cm, class_labels, normalized=True, k=k_1se, output_dir=output_dir)
        plt.close(fig)
        results['confusion_matrix_normalized'] = True
        if verbose:
            print("  ✓ confusion_matrix_normalized.pdf")
    except Exception as e:
        results['confusion_matrix_normalized'] = False
        if verbose:
            print(f"  ✗ confusion_matrix_normalized.pdf: {e}")
    
    try:
        fig = plot_shap_by_class(shap_per_class_df, output_dir=output_dir)
        plt.close(fig)
        results['shap_importance_by_class'] = True
        if verbose:
            print("  ✓ shap_importance_by_class.pdf")
    except Exception as e:
        results['shap_importance_by_class'] = False
        if verbose:
            print(f"  ✗ shap_importance_by_class.pdf: {e}")
    
    if verbose:
        n_success = sum(results.values())
        print(f"\n✓ Exported {n_success}/{len(results)} figures to {output_dir}")
    
    return results


# ============================================================
# LATEX TABLE EXPORT
# ============================================================

def export_latex_tables(grid_results: Dict[str, Dict],
                        output_dir: Optional[Path] = None,
                        verbose: bool = True) -> List[str]:
    """
    Export model comparison and per-class metrics as LaTeX tables.
    
    Args:
        grid_results: Dict mapping model name to {metrics, cm, per_class}
        output_dir: Output directory
        verbose: Print progress
        
    Returns:
        List of exported filenames
    """
    if output_dir is None:
        output_dir = config.LATEX_TABLES_DIR
    output_dir.mkdir(parents=True, exist_ok=True)
    
    exported = []
    
    # Model comparison table
    comparison_df = pd.DataFrame({name: data['metrics'] for name, data in grid_results.items()}).T
    comparison_df.index.name = 'Model'
    
    comparison_df.to_csv(output_dir / "model_comparison.csv")
    exported.append("model_comparison.csv")
    
    latex_table = comparison_df.to_latex(
        float_format="%.4f",
        caption="Model Performance Comparison on Test Set",
        label="tab:model_comparison"
    )
    with open(output_dir / "model_comparison.tex", 'w') as f:
        f.write(latex_table)
    exported.append("model_comparison.tex")
    
    if verbose:
        print(f"  ✓ model_comparison.csv/.tex")
    
    # Per-model tables
    for model_name, data in grid_results.items():
        safe_name = model_name.lower().replace(' ', '_')
        
        # Per-class metrics
        per_class_df = pd.DataFrame(data['per_class']).T
        latex = per_class_df.to_latex(float_format="%.4f", caption=f"Per-class Metrics - {model_name}")
        with open(output_dir / f"per_class_{safe_name}.tex", 'w') as f:
            f.write(latex)
        exported.append(f"per_class_{safe_name}.tex")
        
        # Confusion matrix
        if 'class_names' in data:
            class_names = data['class_names']
        else:
            n_classes = len(data['cm'])
            class_names = [f'Class_{i}' for i in range(n_classes)]
        
        cm_df = pd.DataFrame(data['cm'], index=class_names, columns=class_names)
        cm_df.index.name = 'True'
        cm_df.columns.name = 'Predicted'
        latex = cm_df.to_latex(caption=f"Confusion Matrix - {model_name}")
        with open(output_dir / f"confusion_matrix_{safe_name}.tex", 'w') as f:
            f.write(latex)
        exported.append(f"confusion_matrix_{safe_name}.tex")
        
        if verbose:
            print(f"  ✓ per_class_{safe_name}.tex, confusion_matrix_{safe_name}.tex")
    
    return exported


# ============================================================
# C CODE EXPORT (tl2cgen)
# ============================================================

def export_xgb_to_c(model: Any, model_name: str,
                    output_dir: Optional[Path] = None,
                    verbose: bool = True) -> Optional[Tuple[int, int]]:
    """
    Export XGBoost model to C code using treelite/tl2cgen.
    
    Args:
        model: XGBClassifier or Pipeline containing XGBClassifier
        model_name: Name for output directory
        output_dir: Base output directory
        verbose: Print progress
        
    Returns:
        Tuple of (size in bytes, number of lines) or None if failed
    """
    try:
        import treelite
        import treelite.frontend
        import tl2cgen
    except ImportError:
        if verbose:
            print("✗ tl2cgen/treelite not available. Install with: pip install treelite tl2cgen")
        return None
    
    if output_dir is None:
        output_dir = config.TL2CGEN_DIR
    output_dir.mkdir(parents=True, exist_ok=True)
    
    # Extract XGBClassifier from pipeline if needed
    if hasattr(model, 'named_steps'):
        xgb_clf = model.named_steps['clf']
    else:
        xgb_clf = model
    
    try:
        booster = xgb_clf.get_booster()
        tl_model = treelite.frontend.from_xgboost(booster)
        
        c_output_dir = output_dir / model_name
        if c_output_dir.exists():
            shutil.rmtree(c_output_dir)
        c_output_dir.mkdir(exist_ok=True)
        
        tl2cgen.generate_c_code(tl_model, dirpath=str(c_output_dir), params={})
        
        # Calculate size
        total_size = sum(f.stat().st_size for f in c_output_dir.glob("*.[ch]"))
        total_lines = sum(sum(1 for _ in open(f)) for f in c_output_dir.glob("*.[ch]"))
        
        if verbose:
            print(f"✓ Exported {model_name}: {total_size/1024:.2f} KB, {total_lines:,} lines")
        
        return total_size, total_lines
        
    except Exception as e:
        if verbose:
            print(f"✗ Export failed for {model_name}: {e}")
        return None


def export_models_to_c(selected_k: int, output_dir: Optional[Path] = None,
                       verbose: bool = True) -> pd.DataFrame:
    """
    Export fine-tuned XGBoost models to C code.
    
    Returns:
        DataFrame with model size comparison
    """
    if output_dir is None:
        output_dir = config.TL2CGEN_DIR
    
    results = []
    
    model_path = config.FINETUNE_DIR / f"xgb_finetuned_k{selected_k}.pkl"
    if model_path.exists():
        model = joblib.load(model_path)
        xgb_clf = model.named_steps['clf']
        
        result = export_xgb_to_c(model, f"xgb_k{selected_k}_finetuned", output_dir, verbose)
        
        if result:
            size, lines = result
            results.append({
                'Model': f'XGB k{selected_k} (fine-tuned)',
                'C Code Size (KB)': size / 1024,
                'C Code Lines': lines,
                'n_estimators': xgb_clf.n_estimators,
                'max_depth': xgb_clf.max_depth
            })
    
    if results:
        size_df = pd.DataFrame(results)
        size_df.to_csv(output_dir / "model_size_comparison.csv", index=False)
        return size_df
    
    return pd.DataFrame()
