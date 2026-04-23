# Footstep Classification Using TSFresh Features

Classification of footstep from different species using time-series feature extraction.
Two experiments are provided: **exp001** (FRESH features only) and **exp002** (FRESH + extended features),
both with full uncertainty quantification via conformal prediction.

## Usage

### Running from Scratch

1. **Install dependencies**:
   ```bash
   pip install -r requirements.txt
   ```

2. **Run exp001** (FRESH baseline):
   - Open [`notebooks/exp001_tsfresh.ipynb`](notebooks/exp001_tsfresh.ipynb) and execute sequentially.
   - Outputs written to `results/`.

3. **Run exp002** (extended features):
   - Open [`notebooks/exp002_tsfresh_ext.ipynb`](notebooks/exp002_tsfresh_ext.ipynb) and execute sequentially.
   - Outputs written to `results_ext/`; exp001 artefacts are untouched.
   - **Auto-skip**: cached extended features (`data/interim/extended_audio_features.csv`) are reused
     automatically if present (set `FORCE_REEXTRACT = True` to regenerate).

4. **Explore features**:
   - [`notebooks/features_ext.ipynb`](notebooks/features_ext.ipynb) for Higuchi kmax sensitivity and Petrosian analysis.

### Module Overview

- **`config.py`**: Paths, 800 Hz sample rate, 250 Hz lowpass cutoff, hyperparameter grids
- **`preprocessing.py`**: WAV loading, Butterworth filtering, consolidation, NaN/inf cleaning
- **`features.py`**: TSFresh extraction (779 → 326 via FRESH), feature name humanization
- **`modeling.py`**: Incremental grid search (auto-skip), Friedman/Nemenyi/Wilcoxon tests, RFE with 1-SE rule, SHAP
- **`visualization.py`**: Confusion matrices, k-path plots, importance bars, SHAP beeswarm, LaTeX tables, tl2cgen C code




