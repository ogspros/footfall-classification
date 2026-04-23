# Footfall_identification_baseline

## Project Overview & Key Results

This repository contains the implementation and optimization of the Wavelet-CNN architecture (CNN applied to Continuous Wavelet Transform (CWT) scalograms) for acoustic and seismic signal classification, initially validated on the Footfall Dataset.

### Baseline Achievement
The implemented configuration successfully surpassed the maximum reported baseline accuracy (0.917), demonstrating a more robust and effective model:

| Metric | Original Paper Baseline (Reported Median) | Our Median Test Accuracy (Multiple Runs) |
| :--- | :--- | :--- |
| Weighted Average Test Accuracy | 0.917 | 0.9221 |

## Model Architecture and Correction


The code implements a VGG-style deep CNN. Please note the following crucial scientific detail:

* Architectural Correction: The implemented model utilizes the corrected 3-block Conv/Pool architecture. This was necessary because the original paper had an inconsistency between the network structure described and the reported parameter count (~10.8 million). This corrected structure is essential for achieving the reported performance.
* Structure: The network consists of three consecutive Conv -> Conv -> MaxPool blocks, followed by a Flatten layer and a Dense classifier head.
* Optimizer: Baseline training uses the Adam optimizer with Learning Rate Scheduling and Early Stopping.


## Setup and Reproducibility


### Prerequisites
The project requires Python 3.x and the necessary dependencies, which can be installed using the provided requirements.txt file.

    pip install -r requirements.txt

### Repository Structure

The code is structured as follows, with the core logic contained within the src/ directory:
```
.
├── audio/                          # Input: Raw audio/seismic data files (.wav, etc.)
├── scalograms_preprocessed/        # Input: CWT scalogram images (processed from audio/)
├── output/                         # Output: Training logs, model checkpoints, plots, and metrics
├── src/                            # Core Python modules (model, utilities, config)
│   ├── config.py                   # Hyperparameters, paths, and training settings
│   ├── data_utils.py               # Data loading and augmentation logic
│   ├── models.py                   # PyTorch class definitions for the Wavelet-CNN
│   ├── train_utils.py              # Functions for the training/validation loop
│   └── eval_utils.py               # Functions for metrics calculation and TTA logic
├── run_mc_cv.py                    # Main script for running Monte Carlo Cross-Validation
└── README.md
```

## Usage and Training


1. Data Preparation: Ensure your raw data is in audio/ or , if you use precomputed CWT scalograms, that they are in scalograms_preprocessed/
2. Run Training: The baseline training (including cross-validation for robustness) is executed via the main script:

python run_mc_cv.py

### 5-Fold CV Comparison Run

For a direct comparison with `001_footsteps_rf`, use:

```bash
python run_5fs_cv.py
```

This script:

- rebuilds the same 80/20 stratified split used in `footfall-tsfresh-fd` with seed `42`
- trains the Wavelet-CNN over a 5-fold stratified CV on the training split
- averages test-set probabilities across folds
- saves baseline test predictions, aggregated metrics, and confusion matrix
- runs the paired `10,000`-replicate bootstrap with `95%` CI against the exp001 fine-tuned XGBoost from `footfall-tsfresh-fd`

Main outputs are written under `output/5fs_cv/`.
If needed, override the default paths with `--data-root`, `--output-dir`, and `--reference-root`.

## Contribution and Access

This repository is currently set to private for OGS research collaboration.

* Access Request: Please provide your GitHub username to the repository administrator to be added as a collaborator.
* We encourage contributions regarding Data Augmentation, Transfer Learning, and the development of the modular Python framework.

This repository is managed by Vincenzo Lipari.
