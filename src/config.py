"""
Configuration: Paths, constants, and experiment settings.
"""
import multiprocessing
from pathlib import Path

# ============================================================
# PROJECT PATHS
# ============================================================
PROJECT_ROOT = Path(__file__).resolve().parent.parent

# Data directories (datasets only)
DATA_DIR = PROJECT_ROOT / "data"
RAW_DATA_DIR = DATA_DIR / "raw" / "dataset-audio" / "audio"
INTERIM_DIR = DATA_DIR / "interim"
PROCESSED_DIR = DATA_DIR / "processed"

# Results directories (outputs: models, figures, tables)
RESULTS_DIR = PROJECT_ROOT / "results"

# Raw data source
ALLOCATION_1_DIR = RAW_DATA_DIR / "1"
SUMMARY_CSV = ALLOCATION_1_DIR / "summary.csv"

# Consolidated output (data)
CONSOLIDATED_DIR = INTERIM_DIR / "consolidated"
CONSOLIDATED_SUMMARY = INTERIM_DIR / "consolidated_summary.csv"

# Feature extraction output (data)
DATASET_RAW = INTERIM_DIR / "exp01_consolidated_tsfresh_1_comprehensive.csv"
DATASET_CLEAN = PROCESSED_DIR / "exp01_consolidated_tsfresh_1_comprehensive_clean.csv"

# FRESH feature selection output (data)
FRESH_TRAIN = PROCESSED_DIR / "exp01_fresh_train.csv"
FRESH_TEST = PROCESSED_DIR / "exp01_fresh_test.csv"
FRESH_FEATURES = PROCESSED_DIR / "exp01_fresh_selected_features.txt"

# Grid search results (results)
GRID_SEARCH_DIR = RESULTS_DIR / "grid_search"

# RFE results (results)
RFE_DIR = RESULTS_DIR / "rfe"
FINETUNE_DIR = RESULTS_DIR / "finetuned_models"
IMPORTANCE_DIR = RESULTS_DIR / "feature_importance"

# LaTeX export directories (results)
LATEX_TABLES_DIR = RESULTS_DIR / "latex_tables"
LATEX_FIGURES_DIR = RESULTS_DIR / "latex_figures"

# Model export (results)
TL2CGEN_DIR = RESULTS_DIR / "tl2cgen_export"

# Final metrics (results)
METRICS_DIR = RESULTS_DIR / "metrics"

# Ensemble results (results)
ENSEMBLE_DIR = RESULTS_DIR / "ensemble"

# Conformal prediction results (results)
CONFORMAL_DIR = RESULTS_DIR / "conformal"


def create_directories():
    """Create all output directories."""
    for dir_path in [INTERIM_DIR, CONSOLIDATED_DIR, PROCESSED_DIR,
                     RESULTS_DIR, GRID_SEARCH_DIR, RFE_DIR, FINETUNE_DIR,
                     IMPORTANCE_DIR, LATEX_TABLES_DIR, LATEX_FIGURES_DIR,
                     TL2CGEN_DIR, METRICS_DIR, ENSEMBLE_DIR, CONFORMAL_DIR]:
        dir_path.mkdir(parents=True, exist_ok=True)


# ============================================================
# AUDIO PROCESSING CONFIGURATION
# ============================================================
SAMPLE_RATE = 800  # Hz
LOWPASS_CUTOFF = 250.0  # Hz
LOWPASS_ORDER = 4

# Number of CPUs for parallel processing
N_CPUS = multiprocessing.cpu_count()

# ============================================================
# MODEL CONFIGURATION
# ============================================================
RANDOM_STATE = 42
CV_FOLDS = 5
TEST_SIZE = 0.20

# Grid search parameter grids
PARAM_GRIDS = {
    "RF": {
        "clf__n_estimators": [300, 600, 1000],
        "clf__max_depth": [None, 10, 20],
        "clf__min_samples_split": [2, 5, 10],
        "clf__min_samples_leaf": [1, 2, 4],
        "clf__max_features": ["sqrt", "log2", 0.3],
    },
    "XGB": {
        "clf__n_estimators": [300, 600, 1000],
        "clf__learning_rate": [0.03, 0.1],
        "clf__max_depth": [3, 5, 7],
        "clf__min_child_weight": [1, 3, 5],
        "clf__subsample": [0.8, 1.0],
        "clf__colsample_bytree": [0.5, 0.8, 1.0],
        "clf__reg_lambda": [1.0, 10.0],
        "clf__reg_alpha": [0.0, 0.1],
    },
    "SVM": {
        "clf__kernel": ["rbf"],
        "clf__C": [1e-2, 1e-1, 1, 10, 100],
        "clf__gamma": ["scale", 1e-3, 1e-2, 1e-1],
    },
    "MLP": {
        "clf__hidden_layer_sizes": [(64,), (128,), (64, 32), (128, 64)],
        "clf__alpha": [1e-5, 1e-4, 1e-3, 1e-2],
        "clf__learning_rate_init": [1e-4, 1e-3, 1e-2],
        "clf__activation": ["relu", "tanh"],
    },
    "kNN": {
        "clf__n_neighbors": list(range(3, 31, 2)),
        "clf__weights": ["uniform", "distance"],
        "clf__p": [1, 2],
    },
}

# Extended parameter grids for comprehensive model comparison
# Literature-justified expansions to match XGB search space (~1296 combinations)
PARAM_GRIDS_EXTENDED = {
    # RF: Add bootstrap, class_weight | Target: ~1200 combinations
    # Refs: Breiman (2001), Probst et al. (2019) hyperparameter importance study
    "RF": {
        "clf__n_estimators": [100, 300, 500, 800, 1000],
        "clf__max_depth": [None, 10, 15, 20, 30],
        "clf__min_samples_split": [2, 5, 10],
        "clf__min_samples_leaf": [1, 2, 4],
        "clf__max_features": ["sqrt", "log2", 0.3],
        "clf__bootstrap": [True, False],
        "clf__class_weight": [None, "balanced"],
    },
    # SVM: Add kernels, expand regularization | Target: ~500 combinations
    # Refs: Hsu et al. (2003) practical guide, Keerthi & Lin (2003)
    "SVM": {
        "clf__kernel": ["rbf", "poly", "sigmoid"],
        "clf__C": [1e-3, 1e-2, 1e-1, 0.5, 1, 5, 10, 50, 100, 500, 1000],
        "clf__gamma": ["scale", "auto", 1e-4, 1e-3, 1e-2, 1e-1, 0.5, 1],
        "clf__class_weight": [None, "balanced"],
    },
    # MLP: More architectures, early stopping | Target: ~800 combinations
    # Refs: Goodfellow et al. (2016), Smith (2018) learning rate schedules
    "MLP": {
        "clf__hidden_layer_sizes": [
            (32,), (64,), (128,), (256,),
            (32, 16), (64, 32), (128, 64), (256, 128),
            (64, 32, 16), (128, 64, 32)
        ],
        "clf__alpha": [1e-5, 1e-4, 1e-3, 1e-2, 1e-1],
        "clf__learning_rate_init": [1e-4, 5e-4, 1e-3, 5e-3, 1e-2],
        "clf__activation": ["relu", "tanh"],
        "clf__early_stopping": [True, False],
    },
    # kNN: Expand k range, Minkowski distances | Target: ~500 combinations
    # Refs: Cover & Hart (1967), Weinberger & Saul (2009) metric learning
    "kNN": {
        "clf__n_neighbors": list(range(1, 51, 2)),  # 1 to 49 odd
        "clf__weights": ["uniform", "distance"],
        "clf__p": [1, 2, 3, 4, 5],  # Manhattan to higher-order Minkowski
        "clf__leaf_size": [15, 30, 50],
    },
}

# Fine-tuning grid for XGBoost
FINETUNE_GRID = {
    "clf__n_estimators": [50, 100, 200, 300],
    "clf__max_depth": [3, 5, 7, 10],
    "clf__learning_rate": [0.03, 0.1, 0.2],
    "clf__min_child_weight": [1, 3, 5],
    "clf__subsample": [0.8, 1.0],
    "clf__colsample_bytree": [0.5, 0.8, 1.0]
}
