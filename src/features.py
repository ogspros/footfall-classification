"""
Feature extraction and utilities: TSFresh extraction and feature name humanization.
"""
from concurrent.futures import ProcessPoolExecutor
from pathlib import Path
from typing import List, Optional

import numpy as np
import pandas as pd
from tsfresh import extract_features
from tsfresh.feature_extraction import ComprehensiveFCParameters
from tsfresh.utilities.dataframe_functions import impute
from tsfresh.feature_selection.selection import select_features
from tqdm import tqdm

from . import config
from .preprocessing import load_and_preprocess_audio


# ============================================================
# FEATURE NAME HUMANIZATION
# ============================================================

# Comprehensive replacements based on tsfresh documentation
_FEATURE_REPLACEMENTS = {
    # Autocorrelation features
    'autocorrelation__lag_': 'Autocorrelation (lag ',
    'agg_autocorrelation__f_agg_"mean"__maxlag_': 'Aggregated Autocorr Mean (maxlag ',
    'agg_autocorrelation__f_agg_"var"__maxlag_': 'Aggregated Autocorr Var (maxlag ',
    'agg_autocorrelation__f_agg_"median"__maxlag_': 'Aggregated Autocorr Median (maxlag ',
    'partial_autocorrelation__lag_': 'Partial Autocorr (lag ',
    
    # Spectral features
    'spkt_welch_density__coeff_': 'Welch PSD (coeff ',
    'fft_coefficient__attr_"real"__coeff_': 'FFT Real (coeff ',
    'fft_coefficient__attr_"imag"__coeff_': 'FFT Imaginary (coeff ',
    'fft_coefficient__attr_"abs"__coeff_': 'FFT Magnitude (coeff ',
    'fft_coefficient__attr_"angle"__coeff_': 'FFT Phase (coeff ',
    'fft_aggregated__aggtype_"centroid"': 'FFT Spectral Centroid',
    'fft_aggregated__aggtype_"variance"': 'FFT Spectral Variance',
    'fft_aggregated__aggtype_"skew"': 'FFT Spectral Skewness',
    'fft_aggregated__aggtype_"kurtosis"': 'FFT Spectral Kurtosis',
    'fourier_entropy__bins_': 'Fourier Entropy (bins ',
    
    # Wavelet features
    'cwt_coefficients__coeff_': 'CWT Coefficient (',
    '__widths_': ', width ',
    
    # Autoregressive features
    'ar_coefficient__coeff_': 'AR Coefficient (',
    '__k_': ', order ',
    
    # Entropy features
    'binned_entropy__max_bins_': 'Binned Entropy (bins ',
    'approximate_entropy__m_': 'Approximate Entropy (m=',
    '__r_': ', r=',
    'sample_entropy': 'Sample Entropy',
    'permutation_entropy__dimension_': 'Permutation Entropy (dim ',
    '__tau_': ', tau=',
    
    # Complexity features
    'lempel_ziv_complexity__bins_': 'Lempel-Ziv Complexity (bins ',
    'cid_ce__normalize_True': 'Complexity (CID, normalized)',
    'cid_ce__normalize_False': 'Complexity (CID)',
    'c3__lag_': 'Non-linearity C3 (lag ',
    
    # Trend features
    'linear_trend__attr_"slope"': 'Linear Trend Slope',
    'linear_trend__attr_"intercept"': 'Linear Trend Intercept',
    'linear_trend__attr_"rvalue"': 'Linear Trend R-value',
    'linear_trend__attr_"stderr"': 'Linear Trend Std Error',
    'linear_trend__attr_"pvalue"': 'Linear Trend P-value',
    'agg_linear_trend__attr_"slope"__chunk_len_': 'Aggregated Trend Slope (chunk ',
    'agg_linear_trend__attr_"intercept"__chunk_len_': 'Aggregated Trend Intercept (chunk ',
    '__f_agg_"mean"': ', mean)',
    '__f_agg_"var"': ', var)',
    '__f_agg_"min"': ', min)',
    '__f_agg_"max"': ', max)',
    
    # Change/difference features
    'change_quantiles__f_agg_"mean"__isabs_True__qh_': 'Mean Abs Change in Quantile (',
    'change_quantiles__f_agg_"var"__isabs_True__qh_': 'Var Abs Change in Quantile (',
    'change_quantiles__f_agg_"mean"__isabs_False__qh_': 'Mean Change in Quantile (',
    '__ql_': '-',
    'absolute_sum_of_changes': 'Absolute Sum of Changes',
    'mean_abs_change': 'Mean Absolute Change',
    'mean_change': 'Mean Change',
    'mean_second_derivative_central': 'Mean 2nd Derivative',
    
    # Peak features
    'number_cwt_peaks__n_': 'CWT Peaks (n=',
    'number_peaks__n_': 'Peaks (support=',
    'number_crossing_m__m_': 'Zero Crossings (m=',
    
    # Location features
    'first_location_of_maximum': 'First Max Location',
    'first_location_of_minimum': 'First Min Location',
    'last_location_of_maximum': 'Last Max Location',
    'last_location_of_minimum': 'Last Min Location',
    'index_mass_quantile__q_': 'Index Mass Quantile (q=',
    
    # Distribution features
    'quantile__q_': 'Quantile (',
    'ratio_beyond_r_sigma__r_': 'Ratio Beyond σ (r=',
    'large_standard_deviation__r_': 'Large Std Dev (r=',
    'symmetry_looking__r_': 'Symmetry Looking (r=',
    
    # Streak features
    'longest_strike_above_mean': 'Longest Strike Above Mean',
    'longest_strike_below_mean': 'Longest Strike Below Mean',
    'count_above_mean': 'Count Above Mean',
    'count_below_mean': 'Count Below Mean',
    
    # Reoccurrence features
    'percentage_of_reoccurring_datapoints_to_all_datapoints': '% Reoccurring Datapoints',
    'percentage_of_reoccurring_values_to_all_values': '% Reoccurring Values',
    'sum_of_reoccurring_data_points': 'Sum Reoccurring Datapoints',
    'sum_of_reoccurring_values': 'Sum Reoccurring Values',
    'ratio_value_number_to_time_series_length': 'Unique Value Ratio',
    
    # Energy features
    'abs_energy': 'Absolute Energy',
    'energy_ratio_by_chunks__num_segments_': 'Energy Ratio (segments=',
    '__segment_focus_': ', focus=',
    
    # Basic statistics
    'maximum': 'Maximum',
    'minimum': 'Minimum',
    'mean': 'Mean',
    'median': 'Median',
    'variance': 'Variance',
    'standard_deviation': 'Std Deviation',
    'skewness': 'Skewness',
    'kurtosis': 'Kurtosis',
    'sum_values': 'Sum',
    'length': 'Length',
    'root_mean_square': 'RMS',
    
    # Boolean features
    'has_duplicate': 'Has Duplicates',
    'has_duplicate_max': 'Has Duplicate Max',
    'has_duplicate_min': 'Has Duplicate Min',
    
    # Time reversal
    'time_reversal_asymmetry_statistic__lag_': 'Time Reversal Asymmetry (lag ',
    
    # Range features
    'range_count__max_': 'Range Count (max=',
    '__min_': ', min=',
    'value_count__value_': 'Value Count (val=',
    
    # Stationarity
    'augmented_dickey_fuller__attr_"teststat"__autolag_': 'ADF Test Stat (',
    'augmented_dickey_fuller__attr_"pvalue"__autolag_': 'ADF P-value (',
    'augmented_dickey_fuller__attr_"usedlag"__autolag_': 'ADF Used Lag (',
    
    # Other
    'benford_correlation': 'Benford Correlation',
    'friedrich_coefficients__coeff_': 'Friedrich Coeff (',
    '__m_': ', m=',
    'max_langevin_fixed_point__m_': 'Langevin Fixed Point (m=',
}


def humanize_feature_name(name: str, max_length: int = 40) -> str:
    """
    Convert TSFresh feature names to human-readable descriptive names.
    
    Examples:
        value__autocorrelation__lag_3 → "Autocorrelation (lag 3)"
        value__spkt_welch_density__coeff_8 → "Welch PSD (coeff 8)"
        value__fft_coefficient__attr_"abs"__coeff_5 → "FFT Magnitude (coeff 5)"
    
    Args:
        name: TSFresh feature name
        max_length: Maximum length for plot labels (truncates if longer)
        
    Returns:
        Human-readable feature name
    """
    # Remove 'value__' prefix
    name = name.replace('value__', '')
    
    # Apply replacements
    for old, new in _FEATURE_REPLACEMENTS.items():
        name = name.replace(old, new)
    
    # Clean up quotes
    name = name.replace('"', '').replace("'", '')
    
    # Balance parentheses
    if name.count('(') > name.count(')'):
        name += ')'
    
    # Truncate if needed
    if len(name) > max_length:
        name = name[:max_length - 3] + '...'
    
    return name


def humanize_feature_names(names: List[str], max_length: int = 40) -> List[str]:
    """Humanize a list of feature names."""
    return [humanize_feature_name(n, max_length) for n in names]


# ============================================================
# FEATURE EXTRACTION
# ============================================================

def extract_features_from_audio(sample_id: str, audio_signal: np.ndarray) -> pd.DataFrame:
    """
    Extract TSFresh comprehensive features from a preprocessed audio signal.
    
    Args:
        sample_id: Unique identifier for the sample
        audio_signal: 1D numpy array of audio samples
        
    Returns:
        Single-row DataFrame with extracted features
    """
    if audio_signal.size == 0:
        return pd.DataFrame()
    
    # Create long-format dataframe for tsfresh
    long_df = pd.DataFrame({
        "id": sample_id,
        "time": np.arange(len(audio_signal), dtype=np.int32),
        "value": audio_signal.astype(np.float32)
    })
    
    try:
        features = extract_features(
            long_df,
            column_id="id",
            column_sort="time",
            column_value="value",
            default_fc_parameters=ComprehensiveFCParameters(),
            n_jobs=0,
            disable_progressbar=True
        )
        
        impute(features)
        features = features.replace([np.inf, -np.inf], np.nan).fillna(0.0)
        
        return features
        
    except Exception as e:
        print(f"Error extracting features for {sample_id}: {e}")
        return pd.DataFrame()


def _process_single_file(audio_path: Path, sample_id: str, target: int, category: str) -> Optional[pd.DataFrame]:
    """Process a single audio file: load → preprocess → extract features."""
    audio = load_and_preprocess_audio(audio_path)
    
    if audio.size == 0:
        return None
    
    features = extract_features_from_audio(sample_id, audio)
    
    if features.empty:
        return None
    
    features.insert(0, 'sample_id', sample_id)
    features['target'] = target
    features['category'] = category
    
    return features


def _process_row_wrapper(row: dict) -> Optional[pd.DataFrame]:
    """Worker function for parallel processing."""
    sample_id = Path(row['filename']).stem
    audio_path = Path(row['path'])
    return _process_single_file(audio_path, sample_id, row['target'], row['category'])


def extract_all_features(consolidated_df: pd.DataFrame, n_cpus: Optional[int] = None,
                         verbose: bool = True) -> pd.DataFrame:
    """
    Extract TSFresh features for all files using parallel processing.
    
    Args:
        consolidated_df: DataFrame with 'filename', 'path', 'target', 'category'
        n_cpus: Number of CPUs to use (default: all)
        verbose: Print progress
        
    Returns:
        DataFrame with extracted features
    """
    if n_cpus is None:
        n_cpus = config.N_CPUS
    
    if verbose:
        print(f"Extracting features for {len(consolidated_df)} files using {n_cpus} workers...")
    
    all_features = []
    rows = [row.to_dict() for _, row in consolidated_df.iterrows()]
    
    with ProcessPoolExecutor(max_workers=n_cpus) as executor:
        futures = [executor.submit(_process_row_wrapper, row) for row in rows]
        
        iterator = tqdm(futures, desc="Extracting", total=len(futures)) if verbose else futures
        
        for future in iterator:
            result = future.result()
            if result is not None:
                all_features.append(result)
    
    if not all_features:
        return pd.DataFrame()
    
    dataset = pd.concat(all_features, ignore_index=True)
    
    # Reorder columns
    feature_cols = [c for c in dataset.columns if c not in ['sample_id', 'target', 'category']]
    dataset = dataset[['category'] + feature_cols + ['target']]
    
    if verbose:
        print(f"✓ Extracted {len(feature_cols)} features from {len(dataset)} samples")
    
    return dataset


def apply_fresh_selection(X_train: pd.DataFrame, y_train: pd.Series, 
                          n_jobs: Optional[int] = None, verbose: bool = True) -> List[str]:
    """
    Apply FRESH statistical feature selection.
    
    Args:
        X_train: Training features
        y_train: Training labels
        n_jobs: Number of parallel jobs (default: all CPUs)
        verbose: Print progress
        
    Returns:
        List of selected feature names
    """
    if n_jobs is None:
        n_jobs = config.N_CPUS
    
    if verbose:
        print(f"Applying FRESH selection on {X_train.shape[1]} features...")
    
    X_selected = select_features(X_train, y_train, n_jobs=n_jobs)
    selected = list(X_selected.columns)
    
    if verbose:
        print(f"✓ Selected {len(selected)} features ({100 * (1 - len(selected) / X_train.shape[1]):.1f}% reduction)")
    
    return selected
