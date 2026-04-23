import numpy as np
from scipy.io import wavfile
from scipy.signal import butter, filtfilt, resample_poly # Importare resample_poly
from scipy.ndimage import zoom
from pathlib import Path
#import pywt
import fcwt
import torch
from torch.utils.data import Dataset
from sklearn.preprocessing import LabelEncoder

# Import constants from the config module
from .config import SAMPLE_RATE, MAX_FREQ, IMG_SIZE, DATA_PATH, GLOBAL_STATS_PATH, SPECIES_CODES,SCALOGRAM_PATH

# =======================================================
# 1) Global Statistics Computation (Z-Score)
# =======================================================

def calculate_global_stats(data_path, allocation_ids):
    """
    Calculates the global mean (mu) and standard deviation (sigma) across all 
    filtered training samples. For global Z-Score standardization 
    applied to the signal before the CWT, preventing data leakage.
    """
    all_data_files = []
    
    # 1. Collect all training file paths (from all specified Allocations)
    for alloc_id in allocation_ids:
        alloc_path = data_path / f"Allocation_{alloc_id:02}" / "training"
        all_data_files.extend(list(alloc_path.glob("*.wav")))
    
    if not all_data_files:
        print("Nessun file di training trovato. Verifica DATA_PATH.")
        return 0.0, 1.0

    sum_samples = 0.0
    sum_squares = 0.0
    total_samples_count = 0

    print(f"Calcolo statistiche globali su {len(all_data_files)} file...")

    # 2. Iterate and accumulate efficiently (avoiding loading everything into RAM
    for file_path in all_data_files:
        signal_raw = load_wav_file(file_path, target_sr=SAMPLE_RATE)
        if signal_raw is None or len(signal_raw) == 0:
            continue
        
        # Filter the signal: COHERENCE. Stats must reflect the data used by the CWT.
        signal_filtered = apply_lowpass_filter(signal_raw)
        
        N = len(signal_filtered)
        sum_samples += np.sum(signal_filtered)
        sum_squares += np.sum(signal_filtered**2)
        total_samples_count += N

    if total_samples_count == 0:
        return 0.0, 1.0

    # 3. Calculate final values
    mu_global = sum_samples / total_samples_count
    # Standard deviation calculated using a numerically stable formula
    sigma_global = np.sqrt((sum_squares / total_samples_count) - mu_global**2)
    
    print(f"Calcolo Completato: Global Mean = {mu_global:.6f}, Global Std = {sigma_global:.6f}")
    
    # 4. Save the result
    np.save(GLOBAL_STATS_PATH, np.array([mu_global, sigma_global]))
    print(f"Statistiche salvate in: {GLOBAL_STATS_PATH}")
    
    return mu_global, sigma_global

# STATS LOADING LOGIC:
# If the file exists, load it; otherwise, calculate it.
if not Path(GLOBAL_STATS_PATH).exists():
    # Pass all IDs from 1 to 21 to calculate the global Z-score
    GLOBAL_MEAN, GLOBAL_STD = calculate_global_stats(DATA_PATH, list(range(1, 22)))
else:
    # Otherwise, load saved values
    stats = np.load(GLOBAL_STATS_PATH)
    GLOBAL_MEAN, GLOBAL_STD = stats[0], stats[1]
    print(f"Statistiche Globali caricate: Mean={GLOBAL_MEAN:.6f}, Std={GLOBAL_STD:.6f}")


# =======================================================
# 2) Preprocessing Functions (Filter and Scalogram)
# =======================================================

def apply_lowpass_filter(data, cutoff=MAX_FREQ, fs=SAMPLE_RATE, order=4):
    """Applies a 4th-order Butterworth Low-Pass filter"""
    nyquist = 0.5 * fs
    normal_cutoff = cutoff / nyquist
    b, a = butter(order, normal_cutoff, btype='low', analog=False)
    filtered_data = filtfilt(b, a, data)
    return filtered_data



def apply_max_pooling(array_2d, pool_size, stride_size, target_width):
    """
    Efficient Max Pooling downsampling along the time axis (width).
    Simulates convolutional pooling to reduce time dimension from L_raw (~4800) to IMG_SIZE (224).
    """
    # Determine the width to crop to fit the target exactly
    cropped_width = target_width * stride_size
    cropped_array = array_2d[:, :cropped_width]

    # Reshape: (Frequency, Target Width, Pooling Block Size)
    reshaped = cropped_array.reshape(array_2d.shape[0], target_width, stride_size)
    
    # Calculate the maximum along the block dimension (axis 2)
    pooled = np.max(reshaped, axis=2)
    return pooled




def create_scalogram(signal_clip_standardized, sample_rate=SAMPLE_RATE, wavelet='morl', 
                     scales=None, img_size=IMG_SIZE):
    """
    Creates a CWT scalogram using the FCWT library.
    Input 'signal_clip_standardized'.
    """
    # Morlet parameter: (W0 = 2.0). Controls the time/frequency resolution trade-off.
    morl = fcwt.Morlet(2.0)

    # Initialize scales, specifying linear frequency sampling (FCWT_LINFREQS)
    scales = fcwt.Scales(morl, fcwt.FCWT_LINFREQS, sample_rate, 1, MAX_FREQ, img_size)
    # Initialize FCWT object
    nthreads = 8
    use_optimization_plan = False
    use_normalization = True
    fcwt_obj = fcwt.FCWT(morl, nthreads, use_optimization_plan, use_normalization)
    signal = signal_clip_standardized.astype(np.float32)

    # Pre-allocate output array: (Frequencies: IMG_SIZE, Time: Signal Length)
    time_len_raw = signal.size
    output_raw = np.zeros((img_size, time_len_raw), dtype=np.complex64)

    # CWT Calculation 
    fcwt_obj.cwt(signal,scales, output_raw)
    
    # Magnitude (Absolute) and Log-Scaling
    scalogram_raw = np.abs(output_raw) 
    scalogram_raw = np.log1p(scalogram_raw) # log(1 + x)
    
    target_width = 224
    # Calculate pool stride: 4800 / 224 ≈ 21.42. Use floor(4800/224) = 21
    pool_stride = 21 
    scalogram_downsampled = apply_max_pooling(scalogram_raw, pool_stride, pool_stride, target_width)
    
    return scalogram_downsampled.astype(np.float32)
    
   
   

def RandomShift(tensor):
    """
    Applies a random temporal shift (dimension 2) up to +/- 25% of the image width, 
    filling the resulting space with zeros (zero-padding). Used for Data Augmentation.
    
    Args:
        tensor (torch.Tensor): Scalogram of shape (C, H, W) -> (3, 224, 224).
    """
    
    # Crea una copia per non modificare il tensore originale (Immutabilità)
    shifted_tensor = tensor.clone() 
    width = shifted_tensor.shape[2]
    # Maximum shift limit = 25% of the width 
    max_shift = int(width * 0.25)
    
    # Generate a random integer shift (including 0)
    shift = np.random.randint(-max_shift, max_shift + 1)
    
    if shift == 0:
        return shifted_tensor 

    # Circularly roll the content along the time axis (dimension 2)
    shifted_tensor = torch.roll(shifted_tensor, shifts=shift, dims=2)
    
    # Zero-out the portion that was "rolled over" to simulate padding
    if shift > 0:
        # Shift right: zero out the starting 'shift' columns
        shifted_tensor[:, :, :shift] = 0.0
    else:
        # Shift left: zero out the ending 'abs(shift)' columns
        abs_shift = abs(shift)
        shifted_tensor[:, :, width - abs_shift:] = 0.0
        
    return shifted_tensor



# =======================================================
# 3) PyTorch Datasets
# =======================================================

class ScalogramDatasetOnTheFly(Dataset):
    """
    Dataset for in-memory training. Calculates scalograms on-the-fly 
    at every __getitem__ call. (Slow, but useful for debugging/small sets).
    """
    def __init__(self, signals, labels, transform=None):
        self.signals = signals
        self.labels = labels
        self.transform = transform

    def __len__(self):
        return len(self.signals)
    
    def __getitem__(self, idx):
        # 1. Get the signal (presumed already filtered/resampled)
        sig = self.signals[idx]

        # 3. Calculate the scalogram
        scal = create_scalogram(sig)

        # 4. Local Normalization (Z-score on the scalogram clip)
        # Renders the classification robust to clip-to-clip energy variations.
        mean_clip = np.mean(scal)
        std_clip = np.std(scal)
        
        if std_clip > 1e-8:
            scal = (scal - mean_clip) / std_clip

        # 5. Stack to create 3 channels (RGB-like)
        scal_rgb = np.stack([scal]*3, axis=0).astype(np.float32)
        tensor = torch.from_numpy(scal_rgb)
        
        # 6. Apply transformations (Augmentation)
        if self.transform:
            tensor = self.transform(tensor)
        
        label = int(self.labels[idx])
        return tensor, label
    


class ScalogramDatasetPrecomputed(Dataset):
    """
    Standard Dataset for training/testing. 
    Loads pre-calculated (.npy) scalograms from disk (Fast, ideal for training).
    """
    
    # L'argomento transform gestisce l'augmentation solo quando necessario
    def __init__(self, file_paths, labels, transform=None):
        self.file_paths = file_paths
        self.labels = labels
        self.transform = transform 

    def __len__(self):
        return len(self.file_paths)
    
    def __getitem__(self, idx):
        # Carica i dati come array NumPy
        tensor_data = np.load(self.file_paths[idx])
        # Converte in Tensor (assumiamo che tensor_data sia già float32)
        tensor = torch.from_numpy(tensor_data).float() 
        
        # ⚠️ Applicazione della Trasformazione (Data Augmentation)
        if self.transform:
            tensor = self.transform(tensor)
        
        # Nota: il tuo codice aveva un errore di parentesi qui:
        label = int(self.labels[idx])
        
        # Correzione: assicurati che la label sia un LongTensor (tipico per le classi)
        label_tensor = torch.tensor(label, dtype=torch.long)
        
        return tensor, label_tensor


# =======================================================
# 4) Data Loading and Saving Functions
# =======================================================

def load_wav_file(file_path, target_sr=SAMPLE_RATE):
    """Loads WAV file, normalizes based on bit depth, and resamples to target frequency."""
    try:
        sample_rate_orig, data = wavfile.read(file_path)
        
        if data.dtype == np.int16:
            data = data.astype(np.float32) / 32768.0
        elif data.dtype == np.int32:
            data = data.astype(np.float32) / 2147483648.0
        else:
            data = data.astype(np.float32)
        
        if len(data.shape) > 1:
            data = data[:, 0]
    
        # *** RICAMPIONAMENTO (CORREZIONE CRITICA) ***
        if sample_rate_orig != target_sr:
            up = target_sr
            down = sample_rate_orig
            data = resample_poly(data, up, down)
            
        return data
    except Exception as e:
        print(f"Error loading {file_path}: {e}")
        return None


def load_dataset_allocation(data_path, allocation_id):
    """Loads raw signals for a given allocation ID, organized by split (training, validation, testing)."""
    allocation_path = data_path / str(allocation_id)
    
    if not allocation_path.exists():
        raise ValueError(f"Folder for allocation {allocation_id} not found at {allocation_path}")

    splits = ['training', 'validation', 'testing']
    datasets = {}

    for split in splits:
        split_path = allocation_path / split
        signals = []
        labels = []

        if not split_path.exists():
            datasets[split] = {'signals': signals, 'labels': np.array(labels)}
            continue

        for class_code, class_name in SPECIES_CODES.items():
            class_path = split_path / class_code
            
            if not class_path.exists():
                continue

            wav_files = list(class_path.glob('*.wav'))
            
            for fp in wav_files:
                signal_data = load_wav_file(fp) 
                
                if signal_data is None or len(signal_data) == 0:
                    continue
                
                signals.append(signal_data)
                labels.append(class_name)

        datasets[split] = {
            'signals': signals,
            'labels': np.array(labels)
        }

    return datasets


def save_precomputed_scalograms(allocation_ids, apply_preprocessing, output_path):
    """
    Loads raw signals, applies filter, standardizes globally, applies CWT, normalizes locally, 
    and saves the 3-channel scalograms (.npy) to disk.
    """
    output_path.mkdir(exist_ok=True, parents=True)
    print(f"\nStarting to save scalograms to {output_path}...")
    
    for alloc_id in allocation_ids:
        print(f"\nProcessing Allocation ID: {alloc_id}")
        try:
            # Assumiamo che DATA_PATH e load_dataset_allocation siano definiti
            datasets = load_dataset_allocation(DATA_PATH, alloc_id) 
        except ValueError as e:
            print(f"Skipping allocation {alloc_id}: {e}")
            continue

        for split, data in datasets.items():
            signals = data['signals']
            labels = data['labels']
            
            if not signals:
                continue

            split_path = output_path / str(alloc_id) / split
            split_path.mkdir(exist_ok=True, parents=True)
            
            print(f"  Processing {split} set ({len(signals)} samples)...")

            for i, (sig, label) in enumerate(zip(signals, labels)):
                
                # 1. Filtro Low-Pass (se richiesto, CRITICO per il rumore)
                if apply_preprocessing:
                    # Assumiamo che apply_lowpass_filter sia definito
                    sig = apply_lowpass_filter(sig) 
                
                # 2. STANDARDZZAZIONE Z-SCORE GLOBALE (CORREZIONE CRITICA PER L'ENERGIA)
                # Utilizza i valori calcolati sull'intero dataset di training (GLOBAL_MEAN, GLOBAL_STD).
                
                
                # 3. Creazione dello Scalogramma (ora su segnale standardizzato)
                # create_scalogram non deve più contenere la normalizzazione locale!
                scal = create_scalogram(sig)
                 # 3. Creazione dello Scalogramma (su segnale raw)
          
            
                # # 3.5. 🆕 NORMALIZZAZIONE LOCALE (Z-Score per scalogramma)
                # # Rende ogni scalogramma indipendente dall'energia assoluta
                mean_clip = np.mean(scal)
                std_clip = np.std(scal)
            
                # Applica Z-Score locale
                if std_clip > 1e-8:
                     scal = (scal - mean_clip) / std_clip
                
           
                
                # 4. Stack in 3 canali (RGB)
                scal_rgb = np.stack([scal]*3, axis=0).astype(np.float32)
                
                # Salva il file. Formato: 'LABEL_XXXX.npy'
                file_name = f"{label}_{i:04d}.npy"
                np.save(split_path / file_name, scal_rgb)
                
                if (i + 1) % 500 == 0:
                    print(f"    Saved {i+1}/{len(signals)} samples.")

            print(f"  Finished {split}. Total saved: {len(signals)} files.")
    
    print("\n✓ Scalogram saving complete.")


def load_precomputed_data_paths(allocation_id, scalogram_path, label_encoder):
    """Loads paths to the .npy files and their encoded labels for a given allocation."""
    allocation_path = scalogram_path / str(allocation_id)
    
    if not allocation_path.exists():
        raise ValueError(f"Precomputed scalograms not found for allocation {allocation_id} at {allocation_path}")
    
    splits = ['training', 'validation', 'testing']
    datasets = {}

    for split in splits:
        split_path = allocation_path / split
        file_paths = []
        labels_raw = []

        if not split_path.exists():
            datasets[split] = {'paths': file_paths, 'labels': np.array([])}
            continue

        npy_files = list(split_path.glob('*.npy'))
        
        for fp in npy_files:
            # Estrazione più robusta: Assume il formato LABEL_XXXX.npy
            file_stem = fp.stem 
            parts = file_stem.rsplit('_', 1)
            
            if len(parts) == 2 and parts[1].isdigit():
                label_name = parts[0]
            else:
                label_name = file_stem
                
            labels_raw.append(label_name)
            file_paths.append(str(fp))

        # Codifica le etichette
        encoded_labels = label_encoder.transform(labels_raw)
        
        datasets[split] = {
            'paths': file_paths,
            'labels': encoded_labels
        }
        
    return datasets