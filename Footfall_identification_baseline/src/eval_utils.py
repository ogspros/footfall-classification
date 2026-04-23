import torch
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.metrics import classification_report, confusion_matrix, f1_score

# Importa utility di validazione e costanti
from .train_utils import validate_one_epoch
from .config import OUTPUT_PATH


# =========================
# 7) Evaluation utilities
# =========================

def evaluate_model_torch(model, test_loader, label_encoder, device, 
                         confidence_threshold=None, save_plots=True):
    """Evaluate model on test set"""
    criterion = torch.nn.CrossEntropyLoss()
    model = model.to(device)
    
    _, _, y_pred_proba, y_test = validate_one_epoch(model, test_loader, criterion, device)
    
    if y_pred_proba.size == 0:
        print("⚠ No test samples.")
        return 0.0, None
    
    y_pred = np.argmax(y_pred_proba, axis=1)
    
    # ... [Logica confidence threshold invariata] ...
    if confidence_threshold:
        max_proba = np.max(y_pred_proba, axis=1)
        mask = max_proba >= confidence_threshold
        
        y_test_eval = y_test[mask]
        y_pred_eval = y_pred[mask]
        
        loss_percentage = (1 - mask.sum() / len(mask)) * 100
        print(f"\nData loss with threshold {confidence_threshold}: {loss_percentage:.1f}%")
        
        if len(y_test_eval) == 0:
            print("⚠ No samples passed the confidence threshold.")
            return 0.0, y_pred_proba

    else:
        y_test_eval = y_test
        y_pred_eval = y_pred
    
    # Metrics
    accuracy = np.mean(y_test_eval == y_pred_eval)
    
    print(f"\nAccuracy: {accuracy:.4f} ({accuracy*100:.2f}%)")
    print("\nClassification Report:")
    print(classification_report(
        y_test_eval, 
        y_pred_eval, 
        target_names=label_encoder.classes_,
        digits=3
    ))
    
    # F1 scores per class
    print("\nF1 Scores by Species:")
    f1_scores = {}
    for i, species in enumerate(label_encoder.classes_):
        mask_species = (y_test_eval == i)
        if mask_species.sum() > 0:
            f1 = f1_score(y_test_eval == i, y_pred_eval == i)
            f1_scores[species] = f1
            print(f"  {species}: F1 = {f1:.3f}")
    
    # Confusion matrix
    if save_plots:
        cm = confusion_matrix(y_test_eval, y_pred_eval)
        
        plt.figure(figsize=(10, 8))
        sns.heatmap(
            cm, 
            annot=True, 
            fmt='d', 
            cmap='Blues',
            xticklabels=label_encoder.classes_,
            yticklabels=label_encoder.classes_
        )
        plt.title(f'Confusion Matrix (Accuracy: {accuracy:.3f})')
        plt.ylabel('True Label')
        plt.xlabel('Predicted Label')
        plt.tight_layout()
        
        # Salva la matrice di confusione in output/
        save_path = OUTPUT_PATH / 'confusion_matrix.png'
        plt.savefig(save_path, dpi=300, bbox_inches='tight')
        print(f"\n✓ Confusion matrix saved to {save_path}")
    
    return accuracy, y_pred_proba