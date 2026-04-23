
import torch
import torch.nn as nn
import torch.nn.functional as F
from torchvision import models
import numpy as np
import torch.nn.init as init

def initialize_weights(m):
    if isinstance(m, nn.Conv2d):
        # Inizializzazione Xavier Uniform per i pesi (come Keras default)
        init.xavier_uniform_(m.weight.data)
        if m.bias is not None:
            # Inizializzazione a Zeri per i bias (come Keras default)
            init.constant_(m.bias.data, 0)
    elif isinstance(m, nn.Linear):
        # Inizializzazione Xavier Uniform anche per i layer Fully Connected
        init.xavier_uniform_(m.weight.data)
        init.constant_(m.bias.data, 0)


# Importa le costanti dal modulo config
from .config import IMG_SIZE


# =========================
# 5) Modelli PyTorch
# =========================

def create_model_wavelet_cnno(input_channels=3, num_classes=4):
    """Model #2: Wavelet CNN from scratch"""
    class WaveletCNNo(nn.Module):
        def __init__(self, in_ch=3, n_classes=4):
            super().__init__()
            
            # Conv Block 1
            self.conv1 = nn.Conv2d(in_ch, 32, kernel_size=3, padding=1)
            self.conv2 = nn.Conv2d(32, 64, kernel_size=3, padding=1)
            self.pool = nn.MaxPool2d(2, 2)
            self.drop25 = nn.Dropout2d(0.25)
            
            # Conv Block 2
            self.conv3 = nn.Conv2d(64, 128, kernel_size=3, padding=1)
            
            self._flatten_dim = self._get_flatten_dim(in_ch)
            
            # FC layers
            self.fc1 = nn.Linear(self._flatten_dim, 128)
            self.drop50 = nn.Dropout(0.5)
            self.fc2 = nn.Linear(128, n_classes)

        def _get_flatten_dim(self, in_ch):
            """Calcola la dimensione appiattita dopo i layer convoluzionali"""
            with torch.no_grad():
                x = torch.zeros(1, in_ch, IMG_SIZE, IMG_SIZE)
                x = F.relu(self.conv1(x))
                x = F.relu(self.conv2(x))
                x = self.pool(x)
                x = F.relu(self.conv3(x))
                x = self.pool(x)
                return int(np.prod(x.shape[1:]))

        def forward(self, x):
            x = F.relu(self.conv1(x))
            x = F.relu(self.conv2(x))
            x = self.pool(x)
            x = self.drop25(x)
            
            x = F.relu(self.conv3(x))
            x = self.pool(x)
            x = self.drop25(x)
            
            x = torch.flatten(x, 1)
            x = F.relu(self.fc1(x))
            x = self.drop50(x)
            x = self.fc2(x)
            
            return x

    return WaveletCNNo(in_ch=input_channels, n_classes=num_classes)



# La dimensione del kernel è 5x5, non 3x3.
KERNEL_SIZE = 3
DROPOUT_RATE = 0.5 # Tasso di Dropout corretto per il paper

def create_model_wavelet_cnn(input_channels=3, num_classes=4):
    """Model #2: Wavelet CNN from scratch, allineata ai parametri del paper."""
    
    class WaveletCNN(nn.Module):
        def __init__(self, in_ch=3, n_classes=4):
            super().__init__()
            
            # --- Definizioni dei Layer ---
            
            # 1. Layer Convoluzionali (Kernel 5x5)
            #self.conv1 = nn.Conv2d(in_ch, 32, kernel_size=KERNEL_SIZE, padding=2) # Padding=2 per conservare 224x224
            #self.conv2 = nn.Conv2d(32, 64, kernel_size=KERNEL_SIZE, padding=2)
            self.conv3 = nn.Conv2d(64, 128, kernel_size=KERNEL_SIZE, padding=1)
            self.conv1 = nn.Conv2d(in_ch, 32, kernel_size=3, padding=1) 
            self.conv2 = nn.Conv2d(32, 64, kernel_size=3, padding=1)
            
            self.bn1 = nn.BatchNorm2d(32) # BN per il secondo strato (64 canali)
            self.bn2 = nn.BatchNorm2d(64) # BN per il secondo strato (64 canali)

            # Max Pooling (2x2)
            self.pool = nn.MaxPool2d(2, 2)
            
            # Dropout (Tassi corretti 0.5)
            self.drop25_2d = nn.Dropout2d(0.25) # Per layer Conv
            self.drop50_2d = nn.Dropout2d(DROPOUT_RATE) # Per layer Conv
            self.drop50_1d = nn.Dropout(DROPOUT_RATE)   # Per layer FC
            
            # 2. Calcolo della Dimensione Appiattita
            self._flatten_dim = self._get_flatten_dim(in_ch)
            
            # 3. Layer Fully Connected
            self.fc1 = nn.Linear(self._flatten_dim, 64)
            self.fc2 = nn.Linear(64, n_classes)

            #self.apply(initialize_weights)

        def _get_flatten_dim(self, in_ch):
            """Calcola la dimensione appiattita dopo i 3 blocchi Conv/Pool."""
            try:
                # Simulazione di un tensore di input 1x3x224x224
                x = torch.zeros(1, in_ch, 224, 224)
                
                # Applicazione dei 3 blocchi (Conv->ReLU->Pool)
                x = self.pool(F.relu(self.conv1(x))) # Blocco 1 (32 filtri)
                x = self.pool(F.relu(self.conv2(x))) # Blocco 2 (64 filtri)
                x = self.pool(F.relu(self.conv3(x))) # Blocco 3 (128 filtri)
                
                # La dimensione finale dopo 3 pool(2,2) su 224 è: 224 / (2*2*2) = 28
                # La forma finale è (1, 128, 28, 28)
                return 28 * 28 * 128
            except NameError:
                # Fallback manuale se IMG_SIZE non è definito o il calcolo fallisce
                return 28 * 28 * 128


        def forward(self, x):
            # Blocco 1: 32 filtri
            x = F.relu(self.conv1(x))
            x = self.pool(x)
            #x = self.drop25_2d(x) # ⚠️ Dropout 0.25 dopo il Pool

            # Blocco 2: 64 filtri
            x = F.relu(self.conv2(x))
            x = self.pool(x)
            #x = self.drop25_2d(x) # ⚠️ Dropout 0.25 dopo il Pool

            # Blocco 3: 128 filtri
            x = F.relu(self.conv3(x))
            x = self.pool(x)
            x= self.drop25_2d(x) # ⚠️ Dropout 0.5 dopo il Pool 
            
            # Layer Fully Connected
            x = torch.flatten(x, 1)
            x = F.relu(self.fc1(x))
            x = self.drop50_1d(x) # ⚠️ Dropout 0.5 (1D)
            x = self.fc2(x)
            
            return x

    return WaveletCNN(in_ch=input_channels, n_classes=num_classes)


def create_model_resnet(num_classes=4, pretrained=True):
    """Model #3: ResNet50 con transfer learning"""
    if pretrained:
        weights = models.ResNet50_Weights.DEFAULT
        base = models.resnet50(weights=weights)
    else:
        base = models.resnet50(weights=None)
    
    num_ftrs = base.fc.in_features
    base.fc = nn.Identity()
    
    model = nn.Sequential(
        base,
        nn.Linear(num_ftrs, 512),
        nn.ReLU(),
        nn.Dropout(0.5),
        nn.Linear(512, num_classes)
    )
    
    return model


def create_model_efficientnet(num_classes=4, pretrained=True):
    """Model #4: EfficientNet-B0 con transfer learning"""
    if pretrained:
        weights = models.EfficientNet_B0_Weights.DEFAULT
        base = models.efficientnet_b0(weights=weights)
    else:
        base = models.efficientnet_b0(weights=None)
    
    num_ftrs = base.classifier[1].in_features
    base.classifier = nn.Identity()
    
    model = nn.Sequential(
        base,
        nn.Linear(num_ftrs, num_classes)
    )
    
    return model