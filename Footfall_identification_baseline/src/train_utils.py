

import torch
import torch.nn as nn
import torch.nn.functional as F
import numpy as np
import time
import matplotlib.pyplot as plt
from pathlib import Path
# Importa costanti
from .config import EPOCHS, OUTPUT_PATH


# =======================================================
#  Training Utilities
# =======================================================

def train_one_epoch(model, dataloader, criterion, optimizer, device, print_every=50):
    """
    Performs the training loop for a single epoch.
    Calculates loss, computes gradients, and updates model weights.
    """
    model.train() # Set the model to training mode (enables dropout, batch norm updates)
    running_loss = 0.0
    running_loss = 0.0
    correct = 0
    total = 0

    for batch_idx, (inputs, labels) in enumerate(dataloader):
        # Move data to the specified device (e.g., CUDA). non_blocking=True helps speed up data transfer.
        inputs = inputs.to(device, non_blocking=True)
        labels = labels.to(device, non_blocking=True)

        optimizer.zero_grad() # Clear previous gradients
        outputs = model(inputs) # Forward pass
        loss = criterion(outputs, labels) # Calculate loss
        loss.backward() # Backpropagation: compute gradients
        optimizer.step() # Update weights

        # Accumulate metrics
        # loss.item() * inputs.size(0) scales the mean loss back to the total loss for the batch
        running_loss += loss.item() * inputs.size(0)
        preds = outputs.argmax(dim=1)
        correct += (preds == labels).sum().item()
        total += labels.size(0)

        # Print periodic updates for monitoring training progress
        if (batch_idx + 1) % print_every == 0:
            curr_loss = running_loss / total
            curr_acc = correct / total
            print(f"  Batch {batch_idx+1}/{len(dataloader)} - "
                  f"Loss: {curr_loss:.4f} - Acc: {curr_acc:.4f}")
            
    # Calculate final epoch metrics
    epoch_loss = running_loss / total if total > 0 else 0.0
    epoch_acc = correct / total if total > 0 else 0.0
    
    return epoch_loss, epoch_acc




def validate_one_epoch(model, dataloader, criterion, device):
    """
    Performs the validation (or test) loop for a single epoch.
    Calculates loss, accuracy, and collects prediction probabilities.
    """
    model.eval()
    running_loss = 0.0
    correct = 0
    total = 0
    all_preds_proba = []
    all_labels = []
    
    with torch.no_grad():
        for inputs, labels in dataloader:
            inputs = inputs.to(device, non_blocking=True)
            labels = labels.to(device, non_blocking=True)
            
            outputs = model(inputs)
            loss = criterion(outputs, labels)
            
            running_loss += loss.item() * inputs.size(0)

            # Use Softmax to get probabilities (needed for detailed metrics like AUC/ROC later)
            probs = F.softmax(outputs, dim=1)
            preds = probs.argmax(dim=1)
            correct += (preds == labels).sum().item()
            total += labels.size(0)
            
            # Store results on CPU to avoid running out of VRAM/RAM
            all_preds_proba.append(probs.cpu().numpy())
            all_labels.append(labels.cpu().numpy())
    
    epoch_loss = running_loss / total if total > 0 else 0.0
    epoch_acc = correct / total if total > 0 else 0.0
    
    if len(all_preds_proba) > 0:
        all_preds_proba = np.vstack(all_preds_proba)
        all_labels = np.concatenate(all_labels)
    else:
        all_preds_proba = np.array([])
        all_labels = np.array([])
    
    # all_preds_proba and all_labels are used by eval_utils.py for Confusion Matrix, F1, etc.
    return epoch_loss, epoch_acc, all_preds_proba, all_labels



def plot_history(history, model_name='model'):
    """Plots the training and validation loss and accuracy over epochs."""
    fig, (ax1, ax2) = plt.subplots(1, 2, figsize=(14, 5))
    
    # Loss Plot
    ax1.plot(history['train_loss'], label='Train Loss', marker='o')
    ax1.plot(history['val_loss'], label='Val Loss', marker='s')
    ax1.set_title(f'{model_name} - Loss')
    ax1.set_xlabel('Epoch')
    ax1.set_ylabel('Loss')
    ax1.legend()
    ax1.grid(True, alpha=0.3)
    
    # Accuracy Plot
    ax2.plot(history['train_acc'], label='Train Acc', marker='o')
    ax2.plot(history['val_acc'], label='Val Acc', marker='s')
    ax2.set_title(f'{model_name} - Accuracy')
    ax2.set_xlabel('Epoch')
    ax2.set_ylabel('Accuracy')
    ax2.legend()
    ax2.grid(True, alpha=0.3)
    
    plt.tight_layout()
    # Save the plot to the designated output path
    save_path = OUTPUT_PATH / f'{model_name}_history.png'
    plt.savefig(save_path, dpi=300, bbox_inches='tight')
    print(f"✓ Training history saved to {save_path}")
 


def fit_model(model, train_loader, val_loader, num_epochs=EPOCHS, 
              lr=1e-3, device='cpu', model_name='model'):
    """
    Main training function incorporating Learning Rate Scheduling and Early Stopping.
    """
    model = model.to(device)
    criterion = nn.CrossEntropyLoss() # Standard loss for multi-class classification
    optimizer = torch.optim.Adam(model.parameters(), lr=lr)

    # ReduceLROnPlateau: Decreases LR by factor=0.5 if val_loss doesn't improve after patience=3 epochs
    scheduler = torch.optim.lr_scheduler.ReduceLROnPlateau(
        optimizer, mode='min', patience=3, factor=0.5, min_lr=1e-4
    )
    
    best_val_loss = np.inf
    best_model_state = None
    history = {'train_loss': [], 'train_acc': [], 'val_loss': [], 'val_acc': []}
    
    patience = 6 # Total number of epochs to wait for improvement before stopping (to make parameter)
    epochs_no_improve = 0

    for epoch in range(num_epochs):
        t0 = time.time()
        
        print(f"\nEpoch {epoch+1}/{num_epochs}")
        print("-" * 50)
        
        #--- Training and Validation Steps ---
        train_loss, train_acc = train_one_epoch(model, train_loader, criterion, optimizer, device)
        val_loss, val_acc, _, _ = validate_one_epoch(model, val_loader, criterion, device)
        
        scheduler.step(val_loss) # Update LR based on validation loss
        
        history['train_loss'].append(train_loss)
        history['train_acc'].append(train_acc)
        history['val_loss'].append(val_loss)
        history['val_acc'].append(val_acc)

        elapsed = time.time() - t0
        print(f"\nEpoch Summary:")
        print(f"  Train - Loss: {train_loss:.4f}, Acc: {train_acc:.4f}")
        print(f"  Val   - Loss: {val_loss:.4f}, Acc: {val_acc:.4f}")
        print(f"  Time: {elapsed:.1f}s")
        
        # --- Early Stopping Logic ---
        # Check for significant improvement (val_loss decreased by more than 1e-5)
        if val_loss < best_val_loss - 1e-5:
            best_val_loss = val_loss
            best_model_state = {k: v.cpu().clone() for k, v in model.state_dict().items()}
            epochs_no_improve = 0
            print(f"  ✓ New best model (val_loss: {best_val_loss:.4f})")
        else:
            epochs_no_improve += 1
            print(f"  No improvement ({epochs_no_improve}/{patience})")
            
            if epochs_no_improve >= patience:
                print("\n⚠ Early stopping triggered!")
                break

    # Load the best weights found during training before saving
    if best_model_state is not None:
        model.load_state_dict(best_model_state)
        model = model.to(device)
    
    # Save the final best model weights
    save_path = OUTPUT_PATH / f"{model_name}.pt"
    torch.save(model.state_dict(), save_path)
    print(f"\n✓ Model saved to {save_path}")

    # The model and its history are returned for further use (e.g., evaluation or plotting)
    return model, history