
import numpy as np
from scipy.io import wavfile
from scipy.signal import butter, filtfilt, resample_poly # Importare resample_poly
from scipy.ndimage import zoom
from pathlib import Path
import pywt
import torch
from torch.utils.data import Dataset
from sklearn.preprocessing import LabelEncoder

# Importa le costanti dal modulo config
from .config import SAMPLE_RATE, MAX_FREQ, IMG_SIZE, DATA_PATH, GLOBAL_STATS_PATH, SPECIES_CODES,SCALOGRAM_PATH

# Nel blocco 'data_utils' di footfall_pytorch_fixed (1).py

def calculate_global_stats(data_path, allocation_ids):
    """Calcola la media globale (mu) e la deviazione standard (sigma) su tutti i campioni di training filtrati."""
    all_data_files = []
    
    # 1. Raccogli tutti i percorsi dei file di training (di tutte le 21 Allocations)
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

    # 2. Itera e accumula senza caricare tutto in memoria
    for file_path in all_data_files:
        signal_raw = load_wav_file(file_path, target_sr=SAMPLE_RATE)
        if signal_raw is None or len(signal_raw) == 0:
            continue
        
        # Filtra (essenziale per coerenza con il preprocessing)
        signal_filtered = apply_lowpass_filter(signal_raw)
        
        N = len(signal_filtered)
        sum_samples += np.sum(signal_filtered)
        sum_squares += np.sum(signal_filtered**2)
        total_samples_count += N

    if total_samples_count == 0:
        return 0.0, 1.0

    # 3. Calcola i valori finali
    mu_global = sum_samples / total_samples_count
    # Dev. Standard con formula numericamente stabile
    sigma_global = np.sqrt((sum_squares / total_samples_count) - mu_global**2)
    
    print(f"Calcolo Completato: Global Mean = {mu_global:.6f}, Global Std = {sigma_global:.6f}")
    
    # 4. Salva per l'uso futuro
    np.save(GLOBAL_STATS_PATH, np.array([mu_global, sigma_global]))
    print(f"Statistiche salvate in: {GLOBAL_STATS_PATH}")
    
    return mu_global, sigma_global

# Chiamata di Esecuzione (TEMPORANEA):
# Se GLOBAL_STATS_PATH non esiste, esegui il calcolo:
if not Path(GLOBAL_STATS_PATH).exists():
    GLOBAL_MEAN, GLOBAL_STD = calculate_global_stats(DATA_PATH, list(range(1, 22)))
else:
    # Altrimenti, carica i valori salvati
    stats = np.load(GLOBAL_STATS_PATH)
    GLOBAL_MEAN, GLOBAL_STD = stats[0], stats[1]
    print(f"Statistiche Globali caricate: Mean={GLOBAL_MEAN:.6f}, Std={GLOBAL_STD:.6f}")



# =========================
# 2) Funzioni preprocessing
# =========================

def apply_lowpass_filter(data, cutoff=MAX_FREQ, fs=SAMPLE_RATE, order=5):
    nyquist = 0.5 * fs
    normal_cutoff = cutoff / nyquist
    b, a = butter(order, normal_cutoff, btype='low', analog=False)
    filtered_data = filtfilt(b, a, data)
    return filtered_data
'''
def create_scalogram(signal_clip, sample_rate=SAMPLE_RATE, wavelet='morl', 
                     scales=None, img_size=IMG_SIZE):
    """Crea uno scalogramma CWT."""
    if scales is None:
        frequencies = np.linspace(1, MAX_FREQ, img_size)
        scales = sample_rate / (frequencies * 2)
    
    coefficients, _ = pywt.cwt(signal_clip, scales, wavelet, 
                                sampling_period=1/sample_rate)
    scalogram = np.abs(coefficients)
    scalogram = np.log1p(scalogram)
    #scalogram = (scalogram - scalogram.min()) / (scalogram.max() - scalogram.min() + 1e-8)
    mean = np.mean(scalogram)
    std_dev = np.std(scalogram)
    if std_dev > 1e-8:
        scalogram = (scalogram - mean) / std_dev
    else:
    # Gestione del caso in cui lo scalogramma è piatto
        scalogram = scalogram - mean
    
    
    if scalogram.shape != (img_size, img_size):
        zoom_factors = (img_size / scalogram.shape[0], img_size / scalogram.shape[1])
        scalogram = zoom(scalogram, zoom_factors, order=1)
    
    return scalogram.astype(np.float32)
'''
def create_scalogram(signal_clip_standardized, sample_rate=SAMPLE_RATE, wavelet='morl', 
                     scales=None, img_size=IMG_SIZE):
    """
    Crea uno scalogramma CWT.
    ATTENZIONE: signal_clip_standardized DEVE essere già normalizzato globalmente.
    """
    wavelet = pywt.ContinuousWavelet('morl')
    wavelet.center_frequency = 0.32085 
    wavelet.bandwidth_frequency = 2.0

    # 1. Calcolo Scales (come prima)
    if scales is None:
        frequencies = np.linspace(1, MAX_FREQ, img_size)
        # Nota: il tuo calcolo scales = sample_rate / (frequencies * 2) è peculiare ma lo manteniamo per coerenza
        scales = scales = (0.32085 / frequencies) * sample_rate 
    
    # 2. CWT (su segnale già standardizzato)
    coefficients, _ = pywt.cwt(signal_clip_standardized, scales, wavelet, 
                                 sampling_period=1/sample_rate)
    scalogram = np.abs(coefficients)
    
    # 3. Log-scale (come prima)
    scalogram = np.log1p(scalogram)
    
    # ❌ PASSO CRITICO: NON APPLICHIAMO ALCUNA NORMALIZZAZIONE LOCALE QUI ❌
    # Il segnale è già standardizzato globalmente prima di questa funzione.
    
    # 4. Zoom all'immagine finale (come prima)
    if scalogram.shape != (img_size, img_size):
        zoom_factors = (img_size / scalogram.shape[0], img_size / scalogram.shape[1])
        scalogram = zoom(scalogram, zoom_factors, order=1)
    
    return scalogram.astype(np.float32)



# =========================
# 3) Dataset PyTorch
# =========================

class ScalogramDatasetOnTheFly(Dataset):
    """Dataset che calcola scalogrammi on-the-fly."""
    def __init__(self, signals, labels, transform=None):
        self.signals = signals
        self.labels = labels
        self.transform = transform

    def __len__(self):
        return len(self.signals)
    
    def __getitem__(self, idx):
        sig = self.signals[idx]
        scal = create_scalogram(sig)
        scal_rgb = np.stack([scal]*3, axis=0).astype(np.float32)
        tensor = torch.from_numpy(scal_rgb)
        
        if self.transform:
            tensor = self.transform(tensor)
        
        label = int(self.labels[idx])
        return tensor, label


class ScalogramDatasetPrecomputed(Dataset):
    """Dataset che carica scalogrammi pre-calcolati (.npy) da disco."""
    def __init__(self, file_paths, labels, transform=None):
        self.file_paths = file_paths
        self.labels = labels
        self.transform = transform

    def __len__(self):
        return len(self.file_paths)
    
    def __getitem__(self, idx):
        tensor_data = np.load(self.file_paths[idx])
        tensor = torch.from_numpy(tensor_data)
        
        if self.transform:
            tensor = self.transform(tensor)
        
        label = int(self.labels[idx])
        return tensor, label

# =========================
# 4) Funzioni caricamento dataset e salvataggio scalogrammi
# =========================

def load_wav_file(file_path, target_sr=SAMPLE_RATE):
    """Carica file WAV, normalizza e ricampiona alla frequenza target (CORRETTO)."""
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
    """Carica segnali raw per una data allocation."""
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

'''
def save_precomputed_scalograms(allocation_ids, apply_preprocessing, output_path):
    """Carica i segnali raw, applica il filtro (se richiesto) e crea/salva gli scalogrammi .npy."""
    output_path.mkdir(exist_ok=True, parents=True)
    print(f"\nStarting to save scalograms to {output_path}...")
    
    for alloc_id in allocation_ids:
        print(f"\nProcessing Allocation ID: {alloc_id}")
        try:
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
                
                if apply_preprocessing:
                    sig = apply_lowpass_filter(sig)
                
                scal = create_scalogram(sig)
                scal_rgb = np.stack([scal]*3, axis=0).astype(np.float32)
                
                # Salva il file. Formato: 'LABEL_XXXX.npy'
                file_name = f"{label}_{i:04d}.npy"
                np.save(split_path / file_name, scal_rgb)
                
                if (i + 1) % 500 == 0:
                    print(f"    Saved {i+1}/{len(signals)} samples.")

            print(f"  Finished {split}. Total saved: {len(signals)} files.")
    
    print("\n✓ Scalogram saving complete.")
'''



def save_precomputed_scalograms(allocation_ids, apply_preprocessing, output_path):
    """Carica i segnali raw, applica il filtro (se richiesto), standardizza globalmente e crea/salva gli scalogrammi .npy."""
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
                if GLOBAL_STD > 1e-8:
                    sig = (sig - GLOBAL_MEAN) / GLOBAL_STD
                
                # 3. Creazione dello Scalogramma (ora su segnale standardizzato)
                # create_scalogram non deve più contenere la normalizzazione locale!
                scal = create_scalogram(sig)
                
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
    """Carica i percorsi dei file .npy e le etichette codificate."""
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