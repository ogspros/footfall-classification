"""
Modeling: Grid search, RFE, fine-tuning, statistical tests, and metrics.
"""
import json
from pathlib import Path
from typing import Dict, List, Optional, Tuple, Any

import numpy as np
import pandas as pd
import joblib
from scipy.stats import friedmanchisquare, wilcoxon, spearmanr
import scikit_posthocs as sp
import shap

from sklearn.model_selection import train_test_split, GridSearchCV, StratifiedKFold, cross_val_score
from sklearn.preprocessing import LabelEncoder, StandardScaler
from sklearn.pipeline import Pipeline
from sklearn.feature_selection import RFE
from sklearn.inspection import permutation_importance
from sklearn.metrics import (
    accuracy_score, precision_score, recall_score, f1_score,
    balanced_accuracy_score, classification_report, confusion_matrix
)

from sklearn.ensemble import RandomForestClassifier
from sklearn.svm import SVC
from sklearn.neural_network import MLPClassifier
from sklearn.neighbors import KNeighborsClassifier
from xgboost import XGBClassifier

from tqdm import tqdm

from . import config


# ============================================================
# MODEL DEFINITIONS
# ============================================================

def get_models() -> Dict[str, Any]:
    """Get dictionary of model instances."""
    return {
        "RF": RandomForestClassifier(random_state=config.RANDOM_STATE),
        "XGB": XGBClassifier(random_state=config.RANDOM_STATE, eval_metric='logloss'),
        "SVM": SVC(random_state=config.RANDOM_STATE),
        "MLP": MLPClassifier(random_state=config.RANDOM_STATE, max_iter=1000),
        "kNN": KNeighborsClassifier()
    }


# ============================================================
# GRID SEARCH
# ============================================================

def run_grid_search(X_train: np.ndarray, y_train: np.ndarray, 
                    X_test: np.ndarray, y_test: np.ndarray,
                    output_dir: Optional[Path] = None,
                    model_names: Optional[List[str]] = None,
                    verbose: bool = True) -> pd.DataFrame:
    """
    Run grid search for all models with 5-fold CV.
    
    Args:
        X_train, y_train: Training data
        X_test, y_test: Test data
        output_dir: Directory to save results (default: config.GRID_SEARCH_DIR)
        model_names: Models to evaluate (default: all)
        verbose: Print progress
        
    Returns:
        Summary DataFrame with results
    """
    if output_dir is None:
        output_dir = config.GRID_SEARCH_DIR
    output_dir.mkdir(parents=True, exist_ok=True)
    
    if model_names is None:
        model_names = ["RF", "XGB", "SVM", "MLP", "kNN"]
    
    models = get_models()
    results = []
    
    for model_name in tqdm(model_names, desc="Grid Search", disable=not verbose):
        if verbose:
            print(f"\n{model_name}: Starting Grid Search")
        
        pipeline = Pipeline([
            ("scaler", StandardScaler()),
            ("clf", models[model_name])
        ])
        
        grid_search = GridSearchCV(
            pipeline,
            config.PARAM_GRIDS[model_name],
            cv=config.CV_FOLDS,
            scoring='f1_macro',
            n_jobs=-1,
            verbose=1 if verbose else 0,
            return_train_score=True
        )
        
        grid_search.fit(X_train, y_train)
        test_score = grid_search.score(X_test, y_test)
        
        # Save model
        joblib.dump(grid_search.best_estimator_, output_dir / f"{model_name}_best_model.pkl")
        
        # Save CV results
        cv_results_df = pd.DataFrame(grid_search.cv_results_)
        cv_results_df.to_csv(output_dir / f"{model_name}_cv_results.csv", index=False)
        
        # Save fold statistics
        best_idx = grid_search.best_index_
        fold_stats = {
            'model': model_name,
            'best_params': grid_search.best_params_,
            'mean_train_score': float(cv_results_df.loc[best_idx, 'mean_train_score']),
            'std_train_score': float(cv_results_df.loc[best_idx, 'std_train_score']),
            'mean_test_score': float(cv_results_df.loc[best_idx, 'mean_test_score']),
            'std_test_score': float(cv_results_df.loc[best_idx, 'std_test_score']),
            'test_score': float(test_score)
        }
        for i in range(config.CV_FOLDS):
            fold_stats[f'split{i}_train_score'] = float(cv_results_df.loc[best_idx, f'split{i}_train_score'])
            fold_stats[f'split{i}_test_score'] = float(cv_results_df.loc[best_idx, f'split{i}_test_score'])
        
        with open(output_dir / f"{model_name}_fold_statistics.json", 'w') as f:
            json.dump(fold_stats, f, indent=2)
        
        results.append({
            'model': model_name,
            'best_cv_score': grid_search.best_score_,
            'cv_std': cv_results_df.loc[best_idx, 'std_test_score'],
            'test_score': test_score,
            'n_combinations': len(cv_results_df),
            'best_params': str(grid_search.best_params_)
        })
        
        if verbose:
            print(f"  Best CV: {grid_search.best_score_:.4f}, Test: {test_score:.4f}")
    
    summary_df = pd.DataFrame(results).sort_values('best_cv_score', ascending=False)
    summary_df.to_csv(output_dir / "summary.csv", index=False)
    
    # Save split info
    split_info = {
        'train_size': int(len(X_train)),
        'test_size': int(len(X_test)),
        'n_features': int(X_train.shape[1]),
        'n_classes': int(len(np.unique(y_train))),
        'random_state': config.RANDOM_STATE,
        'test_fraction': config.TEST_SIZE
    }
    with open(output_dir / "split_info.json", 'w') as f:
        json.dump(split_info, f, indent=2)
    
    return summary_df


def run_incremental_grid_search(X_train: np.ndarray, y_train: np.ndarray,
                                 X_test: np.ndarray, y_test: np.ndarray,
                                 output_dir: Optional[Path] = None,
                                 model_names: Optional[List[str]] = None,
                                 verbose: bool = True) -> pd.DataFrame:
    """
    Run incremental grid search using extended parameter grids.
    Skips parameter combinations already present in existing results.
    
    Args:
        X_train, y_train: Training data
        X_test, y_test: Test data
        output_dir: Directory to save results (default: config.GRID_SEARCH_DIR)
        model_names: Models to evaluate (default: RF, SVM, MLP, kNN)
        verbose: Print progress
        
    Returns:
        Summary DataFrame with all results (existing + new)
    """
    from sklearn.model_selection import ParameterGrid
    
    if output_dir is None:
        output_dir = config.GRID_SEARCH_DIR
    output_dir.mkdir(parents=True, exist_ok=True)
    
    if model_names is None:
        model_names = ["RF", "SVM", "MLP", "kNN"]  # XGB already has enough
    
    models = get_models()
    all_results = []
    
    for model_name in tqdm(model_names, desc="Incremental Grid Search", disable=not verbose):
        if model_name not in config.PARAM_GRIDS_EXTENDED:
            print(f"  {model_name}: No extended grid defined, skipping")
            continue
            
        extended_grid = config.PARAM_GRIDS_EXTENDED[model_name]
        
        # Load existing results if available
        existing_cv_path = output_dir / f"{model_name}_cv_results.csv"
        if existing_cv_path.exists():
            existing_df = pd.read_csv(existing_cv_path)
            existing_params = set()
            for _, row in existing_df.iterrows():
                params_str = row['params']
                existing_params.add(params_str)
            n_existing = len(existing_params)
        else:
            existing_df = None
            existing_params = set()
            n_existing = 0
        
        # Generate all parameter combinations from extended grid
        all_param_combos = list(ParameterGrid(extended_grid))
        
        # Filter out already-tested combinations
        new_combos = []
        for combo in all_param_combos:
            combo_str = str(combo)
            if combo_str not in existing_params:
                new_combos.append(combo)
        
        n_total = len(all_param_combos)
        n_new = len(new_combos)
        
        if verbose:
            print(f"\n{model_name}: {n_existing} existing, {n_new} new of {n_total} total combinations")
        
        if n_new == 0:
            print(f"  {model_name}: All combinations already tested, skipping")
            # Still add to results from existing best
            if existing_df is not None:
                best_idx = existing_df['mean_test_score'].idxmax()
                all_results.append({
                    'model': model_name,
                    'best_cv_score': existing_df.loc[best_idx, 'mean_test_score'],
                    'cv_std': existing_df.loc[best_idx, 'std_test_score'],
                    'test_score': 'N/A (from existing)',
                    'n_combinations': n_existing,
                    'n_new': 0,
                    'best_params': existing_df.loc[best_idx, 'params']
                })
            continue
        
        # Run grid search only on new combinations
        pipeline = Pipeline([
            ("scaler", StandardScaler()),
            ("clf", models[model_name])
        ])
        
        # GridSearchCV expects each param value to be a sequence; wrap scalars in lists
        new_param_grid = [{k: [v] for k, v in combo.items()} for combo in new_combos]

        grid_search = GridSearchCV(
            pipeline,
            new_param_grid,  # List of dicts where values are lists
            cv=config.CV_FOLDS,
            scoring='f1_macro',
            n_jobs=-1,
            verbose=1 if verbose else 0,
            return_train_score=True
        )
        
        grid_search.fit(X_train, y_train)
        
        # Get new CV results
        new_cv_results = pd.DataFrame(grid_search.cv_results_)
        
        # Merge with existing results
        if existing_df is not None:
            combined_df = pd.concat([existing_df, new_cv_results], ignore_index=True)
        else:
            combined_df = new_cv_results
        
        # Find overall best
        best_idx = combined_df['mean_test_score'].idxmax()
        best_params_str = combined_df.loc[best_idx, 'params']
        
        # Reconstruct best pipeline and evaluate on test set
        import ast
        try:
            best_params = ast.literal_eval(best_params_str)
        except:
            best_params = grid_search.best_params_
        
        best_pipeline = Pipeline([
            ("scaler", StandardScaler()),
            ("clf", models[model_name])
        ])
        best_pipeline.set_params(**best_params)
        best_pipeline.fit(X_train, y_train)
        test_score = best_pipeline.score(X_test, y_test)
        
        # Save updated results
        joblib.dump(best_pipeline, output_dir / f"{model_name}_best_model.pkl")
        combined_df.to_csv(output_dir / f"{model_name}_cv_results.csv", index=False)
        
        # Update fold statistics
        fold_stats = {
            'model': model_name,
            'best_params': best_params,
            'mean_train_score': float(combined_df.loc[best_idx, 'mean_train_score']),
            'std_train_score': float(combined_df.loc[best_idx, 'std_train_score']),
            'mean_test_score': float(combined_df.loc[best_idx, 'mean_test_score']),
            'std_test_score': float(combined_df.loc[best_idx, 'std_test_score']),
            'test_score': float(test_score)
        }
        for i in range(config.CV_FOLDS):
            fold_stats[f'split{i}_train_score'] = float(combined_df.loc[best_idx, f'split{i}_train_score'])
            fold_stats[f'split{i}_test_score'] = float(combined_df.loc[best_idx, f'split{i}_test_score'])
        
        with open(output_dir / f"{model_name}_fold_statistics.json", 'w') as f:
            json.dump(fold_stats, f, indent=2)
        
        all_results.append({
            'model': model_name,
            'best_cv_score': float(combined_df.loc[best_idx, 'mean_test_score']),
            'cv_std': float(combined_df.loc[best_idx, 'std_test_score']),
            'test_score': float(test_score),
            'n_combinations': len(combined_df),
            'n_new': n_new,
            'best_params': best_params_str
        })
        
        if verbose:
            print(f"  Best CV: {combined_df.loc[best_idx, 'mean_test_score']:.4f}, Test: {test_score:.4f}")
            print(f"  Total combinations now: {len(combined_df)}")
    
    summary_df = pd.DataFrame(all_results)
    if not summary_df.empty:
        summary_df = summary_df.sort_values('best_cv_score', ascending=False)
    
    # Update summary with all models (including XGB)
    existing_summary_path = output_dir / "summary.csv"
    if existing_summary_path.exists():
        old_summary = pd.read_csv(existing_summary_path)
        # Update rows for models we just ran
        for _, row in summary_df.iterrows():
            model = row['model']
            mask = old_summary['model'] == model
            if mask.any():
                old_summary.loc[mask, 'best_cv_score'] = row['best_cv_score']
                old_summary.loc[mask, 'cv_std'] = row['cv_std']
                old_summary.loc[mask, 'test_score'] = row['test_score']
                old_summary.loc[mask, 'n_combinations'] = row['n_combinations']
                old_summary.loc[mask, 'best_params'] = row['best_params']
        old_summary.to_csv(existing_summary_path, index=False)
        summary_df = old_summary.sort_values('best_cv_score', ascending=False)
    else:
        summary_df.to_csv(existing_summary_path, index=False)
    
    return summary_df


# ============================================================
# STATISTICAL TESTS
# ============================================================

def load_fold_scores(model_names: Optional[List[str]] = None, 
                     results_dir: Optional[Path] = None) -> Dict[str, List[float]]:
    """Load CV fold scores from saved JSON files."""
    if results_dir is None:
        results_dir = config.GRID_SEARCH_DIR
    if model_names is None:
        model_names = ["RF", "XGB", "SVM", "MLP", "kNN"]
    
    fold_scores = {}
    for model_name in model_names:
        with open(results_dir / f"{model_name}_fold_statistics.json", 'r') as f:
            stats = json.load(f)
        fold_scores[model_name] = [stats[f'split{i}_test_score'] for i in range(config.CV_FOLDS)]
    
    return fold_scores


def run_statistical_comparison(fold_scores: Dict[str, List[float]], 
                               output_dir: Optional[Path] = None,
                               verbose: bool = True) -> Dict[str, Any]:
    """
    Run Friedman test and Nemenyi post-hoc comparison.
    
    Args:
        fold_scores: Dict mapping model names to list of fold scores
        output_dir: Directory to save results
        verbose: Print results
        
    Returns:
        Dict with test results
    """
    if output_dir is None:
        output_dir = config.GRID_SEARCH_DIR
    
    model_names = list(fold_scores.keys())
    score_matrix = np.array([fold_scores[m] for m in model_names]).T
    score_df = pd.DataFrame(score_matrix, columns=model_names,
                            index=[f'Fold_{i+1}' for i in range(config.CV_FOLDS)])
    
    # Friedman test
    stat, p_value = friedmanchisquare(*[fold_scores[m] for m in model_names])
    
    friedman_results = {
        'statistic': float(stat),
        'p_value': float(p_value),
        'significant': bool(p_value < 0.05),
        'n_models': len(model_names),
        'n_folds': config.CV_FOLDS
    }
    
    # Nemenyi post-hoc
    nemenyi_results = sp.posthoc_nemenyi_friedman(score_df)
    
    # Calculate rankings
    ranks = np.zeros_like(score_matrix)
    for i in range(config.CV_FOLDS):
        fold_ranks = len(model_names) + 1 - np.argsort(np.argsort(score_matrix[i]))
        ranks[i] = fold_ranks
    
    avg_ranks = ranks.mean(axis=0)
    rank_df = pd.DataFrame({
        'Model': model_names,
        'Mean_CV_Score': [np.mean(fold_scores[m]) for m in model_names],
        'Std_CV_Score': [np.std(fold_scores[m]) for m in model_names],
        'Average_Rank': avg_ranks
    }).sort_values('Average_Rank')
    
    # Save results
    with open(output_dir / "friedman_test.json", 'w') as f:
        json.dump(friedman_results, f, indent=2)
    
    nemenyi_results.to_csv(output_dir / "nemenyi_posthoc.csv")
    rank_df.to_csv(output_dir / "model_rankings.csv", index=False)
    score_df.to_csv(output_dir / "fold_scores_matrix.csv")
    
    if verbose:
        print(f"Friedman test: χ² = {stat:.4f}, p = {p_value:.6f}")
        print(f"Significant: {p_value < 0.05}")
        print(f"\nModel Rankings:\n{rank_df.to_string(index=False)}")
    
    return {
        'friedman': friedman_results,
        'nemenyi': nemenyi_results,
        'rankings': rank_df,
        'fold_scores': score_df
    }


def compare_models_wilcoxon(scores_a: List[float], scores_b: List[float],
                            name_a: str = "Model A", name_b: str = "Model B",
                            verbose: bool = True) -> Dict[str, Any]:
    """
    Compare two models using Wilcoxon signed-rank test.
    
    Returns:
        Dict with test results
    """
    stat, p_value = wilcoxon(scores_a, scores_b, alternative='two-sided')
    
    result = {
        'statistic': float(stat),
        'p_value': float(p_value),
        'significant': bool(p_value < 0.05),
        'mean_a': float(np.mean(scores_a)),
        'mean_b': float(np.mean(scores_b)),
        'difference': float(np.mean(scores_b) - np.mean(scores_a))
    }
    
    if verbose:
        print(f"Wilcoxon test: {name_a} vs {name_b}")
        print(f"  Statistic: {stat:.4f}, p-value: {p_value:.4f}")
        print(f"  {name_a}: {np.mean(scores_a):.4f} ± {np.std(scores_a):.4f}")
        print(f"  {name_b}: {np.mean(scores_b):.4f} ± {np.std(scores_b):.4f}")
        print(f"  Significant: {p_value < 0.05}")
    
    return result


# ============================================================
# RFE (Recursive Feature Elimination)
# ============================================================

def run_rfe_elimination(X_train: np.ndarray, y_train: np.ndarray,
                        feature_names: List[str],
                        xgb_params: Optional[Dict] = None,
                        output_dir: Optional[Path] = None,
                        verbose: bool = True) -> pd.DataFrame:
    """
    Run RFE to get feature elimination order.
    
    Args:
        X_train, y_train: Training data
        feature_names: List of feature names
        xgb_params: XGBoost parameters (default: load from grid search)
        output_dir: Directory to save results
        verbose: Print progress
        
    Returns:
        DataFrame with feature rankings
    """
    if output_dir is None:
        output_dir = config.RFE_DIR
    output_dir.mkdir(parents=True, exist_ok=True)
    
    # Load XGB params if not provided
    if xgb_params is None:
        with open(config.GRID_SEARCH_DIR / "XGB_fold_statistics.json", 'r') as f:
            xgb_stats = json.load(f)
        xgb_params = {k.replace('clf__', ''): v for k, v in xgb_stats['best_params'].items()
                      if k.startswith('clf__')}
    
    estimator = XGBClassifier(random_state=config.RANDOM_STATE, n_jobs=-1, **xgb_params)
    
    # Scale data
    scaler = StandardScaler()
    X_scaled = scaler.fit_transform(X_train)
    
    if verbose:
        print(f"Fitting RFE for {len(feature_names)} features...")
    
    rfe = RFE(estimator=estimator, n_features_to_select=1, step=1, verbose=0)
    rfe.fit(X_scaled, y_train)
    
    # Create ranking dataframe
    ranking_df = pd.DataFrame({
        'feature': feature_names,
        'rfe_rank': rfe.ranking_
    }).sort_values('rfe_rank')
    
    ranking_df['elimination_step'] = len(feature_names) - ranking_df['rfe_rank'] + 1
    
    ranking_df.to_csv(output_dir / "rfe_elimination_order.csv", index=False)
    
    if verbose:
        print(f"✓ RFE complete. Top 10 features:")
        for _, row in ranking_df.head(10).iterrows():
            print(f"  {row['rfe_rank']:3d}. {row['feature'][:50]}")
    
    return ranking_df


def evaluate_k_path(X_train: pd.DataFrame, y_train: np.ndarray,
                    ordered_features: List[str],
                    xgb_params: Optional[Dict] = None,
                    output_dir: Optional[Path] = None,
                    verbose: bool = True) -> Tuple[pd.DataFrame, pd.DataFrame]:
    """
    Evaluate CV performance for each k in the feature path.
    
    Returns:
        Tuple of (per-fold DataFrame, summary DataFrame)
    """
    if output_dir is None:
        output_dir = config.RFE_DIR
    
    if xgb_params is None:
        with open(config.GRID_SEARCH_DIR / "XGB_fold_statistics.json", 'r') as f:
            xgb_stats = json.load(f)
        xgb_params = {k.replace('clf__', ''): v for k, v in xgb_stats['best_params'].items()
                      if k.startswith('clf__')}
    
    estimator = XGBClassifier(random_state=config.RANDOM_STATE, n_jobs=-1, **xgb_params)
    cv = StratifiedKFold(n_splits=config.CV_FOLDS, shuffle=True, random_state=config.RANDOM_STATE)
    
    k_path_rows = []
    n_features = len(ordered_features)
    
    iterator = tqdm(range(1, n_features + 1), desc="K-path") if verbose else range(1, n_features + 1)
    
    for k in iterator:
        top_k = ordered_features[:k]
        X_k = X_train[top_k].values
        X_scaled = StandardScaler().fit_transform(X_k)
        
        fold_scores = cross_val_score(estimator, X_scaled, y_train, cv=cv, 
                                      scoring='f1_macro', n_jobs=config.CV_FOLDS)
        
        for fold_idx, score in enumerate(fold_scores):
            k_path_rows.append({'k': k, 'fold': fold_idx, 'test_score': score})
    
    k_path_df = pd.DataFrame(k_path_rows)
    k_path_df.to_csv(output_dir / "rfe_k_path_folds.csv", index=False)
    
    # Summary
    k_summary = k_path_df.groupby('k')['test_score'].agg(['mean', 'std']).reset_index()
    k_summary.columns = ['k', 'mean_score', 'std_score']
    k_summary.to_csv(output_dir / "rfe_k_path_summary.csv", index=False)
    
    return k_path_df, k_summary


def select_optimal_k(k_summary: pd.DataFrame, 
                     output_dir: Optional[Path] = None,
                     verbose: bool = True) -> Dict[str, Any]:
    """
    Select optimal k using 1-SE rule and Friedman test.
    
    Returns:
        Dict with selection results
    """
    if output_dir is None:
        output_dir = config.RFE_DIR
    
    # Find best k
    best_idx = k_summary['mean_score'].idxmax()
    best_k = int(k_summary.loc[best_idx, 'k'])
    best_score = k_summary.loc[best_idx, 'mean_score']
    best_std = k_summary.loc[best_idx, 'std_score']
    
    # 1-SE rule
    se_best = best_std / np.sqrt(config.CV_FOLDS)
    threshold_1se = best_score - se_best
    
    above_threshold = k_summary[k_summary['mean_score'] >= threshold_1se]
    k_1se = int(above_threshold['k'].min())
    score_1se = k_summary[k_summary['k'] == k_1se]['mean_score'].values[0]
    
    # Friedman-based selection
    q_alpha_table = {2: 1.960, 3: 2.343, 4: 2.569, 5: 2.728, 6: 2.850,
                     7: 2.949, 8: 3.031, 9: 3.102, 10: 3.164}
    q_alpha = q_alpha_table.get(min(10, 10), 2.728)
    cd = q_alpha * np.sqrt(10 * 11 / (6 * config.CV_FOLDS))
    
    k_friedman = k_1se
    for k in range(1, best_k + 1):
        k_score = k_summary[k_summary['k'] == k]['mean_score'].values[0]
        if best_score - k_score <= cd * best_std:
            k_friedman = k
            break
    
    score_friedman = k_summary[k_summary['k'] == k_friedman]['mean_score'].values[0]
    
    result = {
        'best_k': best_k,
        'best_score': float(best_score),
        'best_std': float(best_std),
        'k_1se': k_1se,
        'score_1se': float(score_1se),
        'threshold_1se': float(threshold_1se),
        'k_friedman': k_friedman,
        'score_friedman': float(score_friedman),
        'critical_difference': float(cd),
        'n_folds': config.CV_FOLDS
    }
    
    with open(output_dir / "rfe_k_selection.json", 'w') as f:
        json.dump(result, f, indent=2)
    
    if verbose:
        print(f"Best k: {best_k} (score: {best_score:.4f})")
        print(f"1-SE k: {k_1se} (score: {score_1se:.4f})")
        print(f"Friedman k: {k_friedman} (score: {score_friedman:.4f})")
    
    return result


# ============================================================
# FINE-TUNING
# ============================================================

def finetune_xgb(X_train: np.ndarray, y_train: np.ndarray,
                 X_test: np.ndarray, y_test: np.ndarray,
                 selected_k: int,
                 output_dir: Optional[Path] = None,
                 verbose: bool = True) -> Tuple[Any, Dict]:
    """
    Fine-tune XGBoost for reduced feature set.
    
    Returns:
        Tuple of (fitted pipeline, results dict)
    """
    if output_dir is None:
        output_dir = config.FINETUNE_DIR
    output_dir.mkdir(parents=True, exist_ok=True)
    
    pipeline = Pipeline([
        ("scaler", StandardScaler()),
        ("clf", XGBClassifier(random_state=config.RANDOM_STATE, n_jobs=-1, eval_metric='logloss'))
    ])
    
    grid = GridSearchCV(
        pipeline,
        config.FINETUNE_GRID,
        cv=config.CV_FOLDS,
        scoring='f1_macro',
        n_jobs=-1,
        verbose=1 if verbose else 0,
        return_train_score=True
    )
    
    grid.fit(X_train, y_train)
    
    best_idx = grid.best_index_
    cv_results = pd.DataFrame(grid.cv_results_)
    fold_scores = [cv_results.loc[best_idx, f'split{i}_test_score'] for i in range(config.CV_FOLDS)]
    
    results = {
        'selected_k': selected_k,
        'n_features': selected_k,
        'best_params': grid.best_params_,
        'cv_score_mean': float(grid.best_score_),
        'cv_score_std': float(cv_results.loc[best_idx, 'std_test_score']),
        'test_score': float(grid.score(X_test, y_test)),
        'fold_scores': [float(s) for s in fold_scores]
    }
    
    # Save
    joblib.dump(grid.best_estimator_, output_dir / f"xgb_finetuned_k{selected_k}.pkl")
    with open(output_dir / f"xgb_finetuned_k{selected_k}_results.json", 'w') as f:
        json.dump(results, f, indent=2)
    
    if verbose:
        print(f"✓ Fine-tuned XGB k={selected_k}: CV={grid.best_score_:.4f}, Test={results['test_score']:.4f}")
    
    return grid.best_estimator_, results


# ============================================================
# FEATURE IMPORTANCE
# ============================================================

def compute_importance_analysis(model: Any, X_train: np.ndarray, X_test: np.ndarray,
                                y_test: np.ndarray, feature_names: List[str],
                                humanized_names: List[str],
                                class_names: List[str],
                                output_dir: Optional[Path] = None,
                                verbose: bool = True) -> Dict[str, pd.DataFrame]:
    """
    Compute impurity, permutation, and SHAP importance.
    
    Returns:
        Dict with importance DataFrames
    """
    if output_dir is None:
        output_dir = config.IMPORTANCE_DIR
    output_dir.mkdir(parents=True, exist_ok=True)
    
    xgb_clf = model.named_steps['clf']
    scaler = model.named_steps['scaler']
    X_test_scaled = scaler.transform(X_test)
    
    # Impurity importance
    impurity_df = pd.DataFrame({
        'feature': feature_names,
        'feature_short': humanized_names,
        'importance': xgb_clf.feature_importances_
    }).sort_values('importance', ascending=False)
    impurity_df['rank_impurity'] = range(1, len(impurity_df) + 1)
    
    if verbose:
        print("✓ Impurity importance computed")
    
    # Permutation importance
    perm_result = permutation_importance(model, X_test, y_test, n_repeats=30,
                                         random_state=config.RANDOM_STATE, n_jobs=-1,
                                         scoring='f1_macro')
    
    perm_df = pd.DataFrame({
        'feature': feature_names,
        'feature_short': humanized_names,
        'importance_mean': perm_result.importances_mean,
        'importance_std': perm_result.importances_std
    }).sort_values('importance_mean', ascending=False)
    perm_df['rank_permutation'] = range(1, len(perm_df) + 1)
    
    if verbose:
        print("✓ Permutation importance computed")
    
    # SHAP
    explainer = shap.TreeExplainer(xgb_clf)
    shap_values_raw = explainer.shap_values(X_test_scaled)
    
    # Handle different SHAP formats
    if isinstance(shap_values_raw, list):
        shap_values = shap_values_raw
    elif isinstance(shap_values_raw, np.ndarray):
        if shap_values_raw.ndim == 3:
            shap_values = [shap_values_raw[:, :, c] for c in range(shap_values_raw.shape[2])]
        elif shap_values_raw.ndim == 2:
            shap_values = [-shap_values_raw, shap_values_raw]
        else:
            raise ValueError(f"Unexpected SHAP shape: {shap_values_raw.shape}")
    else:
        raise ValueError(f"Unexpected SHAP type: {type(shap_values_raw)}")
    
    overall_shap = np.mean([np.abs(sv).mean(axis=0) for sv in shap_values], axis=0)
    
    shap_df = pd.DataFrame({
        'feature': feature_names,
        'feature_short': humanized_names,
        'importance': overall_shap
    }).sort_values('importance', ascending=False)
    shap_df['rank_shap'] = range(1, len(shap_df) + 1)
    
    # Per-class SHAP
    shap_per_class = {}
    for class_idx, class_name in enumerate(class_names):
        shap_per_class[class_name] = np.abs(shap_values[class_idx]).mean(axis=0)
    
    shap_per_class_df = pd.DataFrame(shap_per_class, index=feature_names)
    shap_per_class_df['feature_short'] = humanized_names
    
    if verbose:
        print("✓ SHAP analysis computed")
    
    # Ranking comparison
    ranking_df = impurity_df[['feature', 'feature_short', 'rank_impurity']].merge(
        perm_df[['feature', 'rank_permutation']], on='feature'
    ).merge(
        shap_df[['feature', 'rank_shap']], on='feature'
    )
    ranking_df['mean_rank'] = ranking_df[['rank_impurity', 'rank_permutation', 'rank_shap']].mean(axis=1)
    ranking_df['rank_std'] = ranking_df[['rank_impurity', 'rank_permutation', 'rank_shap']].std(axis=1)
    ranking_df = ranking_df.sort_values('mean_rank')
    
    # Spearman correlations
    if verbose:
        print("\nRank correlations:")
        for n1, n2, c1, c2 in [('Impurity', 'Permutation', 'rank_impurity', 'rank_permutation'),
                               ('Impurity', 'SHAP', 'rank_impurity', 'rank_shap'),
                               ('Permutation', 'SHAP', 'rank_permutation', 'rank_shap')]:
            rho, p = spearmanr(ranking_df[c1], ranking_df[c2])
            print(f"  {n1} vs {n2}: ρ = {rho:.3f} (p = {p:.4f})")
    
    # Save all
    impurity_df.to_csv(output_dir / "impurity_importance.csv", index=False)
    perm_df.to_csv(output_dir / "permutation_importance.csv", index=False)
    shap_df.to_csv(output_dir / "shap_importance.csv", index=False)
    shap_per_class_df.to_csv(output_dir / "shap_importance_per_class.csv")
    ranking_df.to_csv(output_dir / "ranking_comparison.csv", index=False)
    
    np.savez(output_dir / "shap_values.npz",
             shap_values=np.array(shap_values),
             feature_names=feature_names,
             class_names=class_names)
    
    feature_name_map = dict(zip(feature_names, humanized_names))
    with open(output_dir / "feature_name_mapping.json", 'w') as f:
        json.dump(feature_name_map, f, indent=2)
    
    return {
        'impurity': impurity_df,
        'permutation': perm_df,
        'shap': shap_df,
        'shap_per_class': shap_per_class_df,
        'ranking': ranking_df,
        'shap_values': shap_values,
        'explainer': explainer
    }


# ============================================================
# METRICS
# ============================================================

def compute_all_metrics(y_true: np.ndarray, y_pred: np.ndarray,
                        class_names: List[str]) -> Tuple[Dict[str, float], np.ndarray, Dict]:
    """
    Compute comprehensive classification metrics.
    
    Returns:
        Tuple of (metrics dict, confusion matrix, per-class dict)
    """
    metrics = {
        'Accuracy': accuracy_score(y_true, y_pred),
        'Balanced Accuracy': balanced_accuracy_score(y_true, y_pred),
        'Precision (Macro)': precision_score(y_true, y_pred, average='macro', zero_division=0),
        'Recall (Macro)': recall_score(y_true, y_pred, average='macro', zero_division=0),
        'F1 (Macro)': f1_score(y_true, y_pred, average='macro', zero_division=0),
        'F1 (Weighted)': f1_score(y_true, y_pred, average='weighted', zero_division=0),
    }
    
    cm = confusion_matrix(y_true, y_pred)
    per_class = classification_report(y_true, y_pred, target_names=class_names,
                                      output_dict=True, zero_division=0)
    
    return metrics, cm, per_class


def evaluate_final_model(model: Any, X_test: np.ndarray, y_test: np.ndarray,
                         class_names: List[str],
                         output_dir: Optional[Path] = None,
                         verbose: bool = True) -> Dict:
    """
    Final evaluation on test set.
    
    Returns:
        Dict with all metrics and results
    """
    if output_dir is None:
        output_dir = config.METRICS_DIR
    
    y_pred = model.predict(X_test)
    metrics, cm, per_class = compute_all_metrics(y_test, y_pred, class_names)
    
    if verbose:
        print(f"\nFinal Test Results:")
        print(f"  Accuracy: {metrics['Accuracy']:.4f}")
        print(f"  F1 (Macro): {metrics['F1 (Macro)']:.4f}")
        print(f"\n{classification_report(y_test, y_pred, target_names=class_names)}")
    
    # Save
    metrics_df = pd.DataFrame({'Metric': list(metrics.keys()), 'Value': list(metrics.values())})
    metrics_df.to_csv(output_dir / "final_model_metrics.csv", index=False)
    
    per_class_df = pd.DataFrame(per_class).T
    per_class_df.to_csv(output_dir / "final_model_per_class_metrics.csv")
    
    cm_df = pd.DataFrame(cm, index=class_names, columns=class_names)
    cm_df.index.name = 'True'
    cm_df.to_csv(output_dir / "confusion_matrix_final.csv")
    
    return {
        'metrics': metrics,
        'confusion_matrix': cm,
        'per_class': per_class,
        'y_pred': y_pred
    }
