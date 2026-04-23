
from pathlib import Path
import torch

# -------------------------
# 1) Config e parametri
# -------------------------
SAMPLE_RATE = 800         # Frequenza di processing (Target)
RECORDING_RATE = 1000     # Frequenza di registrazione (Da paper, Sezione 2.2)
MAX_FREQ = 250            # Frequenza di taglio del filtro Low-Pass
EVENT_WINDOW = 0.02
EVENT_SILENCE = 2.0
CLIP_DURATION = 6.0
PADDING = 1.0
BSD_THRESHOLD = 3

IMG_SIZE = 224
BATCH_SIZE = 64
EPOCHS = 30
CONFIDENCE_THRESHOLD = 0.8

# PERCORSI (Adattali al tuo ambiente)
DATA_PATH = Path("/home/vlipari/Footfall/audio/")
OUTPUT_PATH = Path("/home/vlipari/Footfall/output")
SCALOGRAM_PATH = Path("/home/vlipari/Footfall/scalograms_preprocessed") 
GLOBAL_STATS_PATH = Path("/home/vlipari/Footfall/scalograms_preprocessed/global_stats.npy") 

# Codici Specie
SPECIES_CODES = {
    'BB': 'Black_Bear',
    'C': 'Cougar',
    'GW': 'Grey_Wolf',
    'WTD': 'White_tailed_Deer'
}

# Setup Dispositivo
DEVICE = torch.device("cuda" if torch.cuda.is_available() else "cpu")

if DEVICE.type == 'cuda':
    print(f"GPU: {torch.cuda.get_device_name(0)}")