"""
Audio preprocessing: loading, resampling, and filtering.
"""
import shutil
from math import gcd
from pathlib import Path

import numpy as np
import pandas as pd
import soundfile as sf
from scipy.signal import butter, filtfilt, resample_poly
from tqdm import tqdm

from . import config


def load_and_preprocess_audio(audio_path: Path) -> np.ndarray:
    """
    Load a .wav file, resample to target sample rate, and apply lowpass filter.
    
    Args:
        audio_path: Path to the audio file
        
    Returns:
        Preprocessed audio signal as float32 numpy array
    """
    # Load audio
    x, sr = sf.read(audio_path, always_2d=False)
    
    # Convert to mono if stereo
    if x.ndim == 2:
        x = x.mean(axis=1)
    
    x = x.astype(np.float32)
    
    # Resample if needed
    if sr != config.SAMPLE_RATE:
        g = gcd(int(sr), int(config.SAMPLE_RATE))
        up = int(config.SAMPLE_RATE) // g
        down = int(sr) // g
        x = resample_poly(x, up=up, down=down).astype(np.float32)
    
    # Apply lowpass filter
    nyq = 0.5 * config.SAMPLE_RATE
    wn = config.LOWPASS_CUTOFF / nyq
    
    if wn < 1.0:
        b, a = butter(config.LOWPASS_ORDER, wn, btype="low")
        x = filtfilt(b, a, x).astype(np.float32)
    
    return x


def consolidate_audio_files(summary_df: pd.DataFrame, verbose: bool = True) -> pd.DataFrame:
    """
    Copy audio files from source directory to consolidated directory.
    
    Args:
        summary_df: DataFrame with 'filename', 'fold', 'target', 'category' columns
        verbose: Print progress
        
    Returns:
        DataFrame with consolidated file info
    """
    copied_files = []
    missing_files = []
    
    iterator = tqdm(summary_df.iterrows(), total=len(summary_df), desc="Consolidating") if verbose else summary_df.iterrows()
    
    for idx, row in iterator:
        filename = row['filename']
        src_path = config.ALLOCATION_1_DIR / filename
        dst_filename = Path(filename).name
        dst_path = config.CONSOLIDATED_DIR / dst_filename
        
        if src_path.exists():
            if not dst_path.exists():
                shutil.copy2(src_path, dst_path)
            copied_files.append({
                'filename': dst_filename,
                'path': str(dst_path),
                'fold': row['fold'],
                'target': row['target'],
                'category': row['category']
            })
        else:
            missing_files.append(str(src_path))
    
    consolidated_df = pd.DataFrame(copied_files)
    consolidated_df.to_csv(config.CONSOLIDATED_SUMMARY, index=False)
    
    if verbose:
        print(f"\n✓ Consolidation complete!")
        print(f"  Copied: {len(copied_files)} files")
        print(f"  Missing: {len(missing_files)} files")
        
        if missing_files:
            print(f"\n⚠ Missing files (first 10):")
            for f in missing_files[:10]:
                print(f"  {f}")
    
    return consolidated_df


def clean_dataset(df: pd.DataFrame, verbose: bool = True) -> pd.DataFrame:
    """
    Clean dataset: impute NaN/inf values and remove zero-variance features.
    
    Args:
        df: DataFrame with 'category', 'target', and feature columns
        verbose: Print progress
        
    Returns:
        Cleaned DataFrame
    """
    class_code = df['category']
    target = df['target']
    feature_cols = [c for c in df.columns if c not in ['category', 'target']]
    X = df[feature_cols].copy()
    
    if verbose:
        print(f"Original features: {len(feature_cols)}")
    
    # Step 1: Imputation
    nan_count = X.isna().sum().sum()
    inf_count = np.isinf(X.select_dtypes(include=[np.number])).sum().sum()
    
    if nan_count > 0 or inf_count > 0:
        X = X.replace([np.inf, -np.inf], np.nan).fillna(0.0)
        if verbose:
            print(f"  Imputed {nan_count} NaN and {inf_count} inf values")
    
    # Step 2: Remove zero-variance features
    variances = X.var()
    zero_var_cols = variances[variances == 0].index.tolist()
    
    if zero_var_cols:
        X = X.drop(columns=zero_var_cols)
        if verbose:
            print(f"  Removed {len(zero_var_cols)} zero-variance features")
    
    # Rebuild dataset
    result = pd.DataFrame()
    result['category'] = class_code
    result = pd.concat([result, X], axis=1)
    result['target'] = target
    
    if verbose:
        print(f"Final features: {len(X.columns)}")
    
    return result
