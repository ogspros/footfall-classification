import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.preprocessing import LabelEncoder
from torch.utils.data import DataLoader
from pathlib import Path

# Import project modules and constants
from src.config import DATA_PATH, SCALOGRAM_PATH, OUTPUT_PATH,GLOBAL_STATS_PATH, EPOCHS, BATCH_SIZE, DEVICE
from src.data_utils import (
    load_dataset_allocation, 
    save_precomputed_scalograms, 
    load_precomputed_data_paths, 
    ScalogramDatasetPrecomputed,
    ScalogramDatasetOnTheFly,
    calculate_global_stats,
    RandomShift # Data Augmentation transform
)
from src.models import create_model_wavelet_cnn
from src.train_utils import fit_model
from src.eval_utils import evaluate_model_torch
import fcwt # Required for CWT processing (implicitly used via data_utils)



# =======================================================
#  Main Pipeline and Monte Carlo CV
# =======================================================

def monte_carlo_cross_validation(data_path, allocation_ids, model_fn, 
                                 mode='load_precomputed', scalogram_path=None, 
                                 num_epochs=EPOCHS, lr=1e-3):
    """
    Executes a Monte Carlo Cross-Validation strategy, training and testing 
    the model separately on each 'Allocation' (Leave-One-Event-Out).
    This assesses the model's ability to generalize across different recording events.
    """
    
    # 1. Global LabelEncoder Fit (Necessary for consistent class indexing across all events)
    print("\n" + "=" * 60)
    print("PHASE 1: Global Label Encoding for all allocations")
    print("=" * 60)
    all_labels_global = []
    
    for alloc_id in allocation_ids:
        try:
            datasets = load_dataset_allocation(data_path, alloc_id) 
            all_labels_global.extend(datasets['training']['labels'])
            all_labels_global.extend(datasets['validation']['labels'])
            all_labels_global.extend(datasets['testing']['labels'])
        except Exception:
            continue 
            
    if not all_labels_global:
        raise ValueError("No data found for any allocation to fit the LabelEncoder.")
        
    label_encoder = LabelEncoder()
    label_encoder.fit(all_labels_global)
    num_classes = len(label_encoder.classes_)
    
    print(f"Classes: {label_encoder.classes_}")
    
    results = []
    # Set number of workers based on device availability (0 for non-CUDA devices often works better)
    num_workers = 4 if DEVICE.type == 'cuda' else 0

    # 2. Monte Carlo Loop: Train/Test on each Allocation
    for alloc_id in allocation_ids:
        print("\n" + "=" * 60)
        print(f"Starting Training for Allocation ID: {alloc_id}")
        print("=" * 60)
        
        try:
            # --- Load Data and Create Datasets ---
            if mode == 'load_precomputed':
                data_paths = load_precomputed_data_paths(alloc_id, scalogram_path, label_encoder)

                # Apply RandomShift (Data Augmentation) only to the training set
                train_dataset = ScalogramDatasetPrecomputed(data_paths['training']['paths'], data_paths['training']['labels'],transform=RandomShift)
                val_dataset = ScalogramDatasetPrecomputed(data_paths['validation']['paths'], data_paths['validation']['labels'],transform=None)
                test_dataset = ScalogramDatasetPrecomputed(data_paths['testing']['paths'], data_paths['testing']['labels'],transform=None)
                
            elif mode == 'on_the_fly':
                # Load raw signals and create scalograms during runtime (slower)
                datasets = load_dataset_allocation(data_path, alloc_id)
                # Ensure labels are globally encoded
                train_labels = label_encoder.transform(datasets['training']['labels'])
                val_labels = label_encoder.transform(datasets['validation']['labels'])
                test_labels = label_encoder.transform(datasets['testing']['labels'])
                
                # Note: The 'transform' argument in OnTheFly dataset should be RandomShift if used
                train_dataset = ScalogramDatasetOnTheFly(datasets['training']['signals'], train_labels,augment=True)
                val_dataset = ScalogramDatasetOnTheFly(datasets['validation']['signals'], val_labels,augment=False)
                test_dataset = ScalogramDatasetOnTheFly(datasets['testing']['signals'], test_labels,augment=False)
            else:
                raise ValueError(f"Unknown mode: {mode}")

            if len(train_dataset) == 0:
                 print("⚠ Skipping: No training samples found for this allocation.")
                 continue

            # 3. Create Dataloaders
            # pin_memory=True speeds up transfer to GPU
            train_loader = DataLoader(train_dataset, batch_size=BATCH_SIZE, shuffle=True, num_workers=num_workers, pin_memory=True if DEVICE.type == 'cuda' else False)
            val_loader = DataLoader(val_dataset, batch_size=BATCH_SIZE, shuffle=False, num_workers=num_workers, pin_memory=True if DEVICE.type == 'cuda' else False)
            test_loader = DataLoader(test_dataset, batch_size=BATCH_SIZE, shuffle=False, num_workers=num_workers, pin_memory=True if DEVICE.type == 'cuda' else False)
            
            # 4. Initialize and Train the Model
            model_name = f"{model_fn.__name__}_{alloc_id:02d}"
            # Re-initialize the model for each allocation (Monte Carlo principle)
            model = model_fn(num_classes=num_classes)
            
            trained_model, history = fit_model(
                model, train_loader, val_loader, 
                num_epochs=num_epochs, lr=lr, device=DEVICE, model_name=model_name
            )
            
            # 5. Evaluation on the Test Set
            # Note: evaluate_model_torch returns accuracy and raw probabilities
            acc, proba = evaluate_model_torch(
                trained_model, test_loader, label_encoder, DEVICE, save_plots=False
            )
            
            # 6. Store results for the current allocation
            results.append({
                'allocation_id': alloc_id,
                'model': model_fn.__name__,
                'test_accuracy': acc,
                'num_samples': len(test_dataset)
            })

        except Exception as e:
            print(f"❌ Error processing allocation {alloc_id}: {e}")
            # Log the failure in results
            results.append({
                'allocation_id': alloc_id,
                'model': model_fn.__name__,
                'test_accuracy': np.nan,
                'num_samples': 0
            })
            continue

    # 7. Final Summary and Reporting
    results_df = pd.DataFrame(results)
    
    # Calculate weighted average accuracy (by number of samples in each test set)
    total_samples = results_df['num_samples'].sum()
    weighted_avg_acc = (results_df['test_accuracy'] * results_df['num_samples']).sum() / total_samples if total_samples > 0 else 0.0
    
    
    print("\n" + "=" * 70)
    print("MONTE CARLO CROSS-VALIDATION COMPLETED")
    print("=" * 70)
    print(f"Weighted Average Test Accuracy: {weighted_avg_acc:.4f}")

    # Save results to CSV
    final_results_path = OUTPUT_PATH / 'monte_carlo_results.csv'
    results_df.to_csv(final_results_path, index=False)
    print(f"Results saved to: {final_results_path}")
    
    # Save the plot
    plt.figure(figsize=(12, 6))
    sns.barplot(x='allocation_id', y='test_accuracy', data=results_df, palette='viridis')
    plt.axhline(weighted_avg_acc, color='r', linestyle='--', label=f'Weighted Avg: {weighted_avg_acc:.4f}')
    plt.title(f'Monte Carlo CV - {model_fn.__name__} Accuracy per Allocation')
    plt.xlabel('Allocation ID')
    plt.ylabel('Test Accuracy')
    plt.legend()
    plt.grid(axis='y', alpha=0.5)
    
    final_plot_path = OUTPUT_PATH / 'monte_carlo_results.png'
    plt.savefig(final_plot_path, dpi=300, bbox_inches='tight')
    print(f"Plot saved to: {final_plot_path}")
    
    return results_df


# =======================================================
# 9) Main Execution Block
# =======================================================
if __name__ == "__main__":
    
    
    # List of all allocations to process (1 to 21)
    ALLOCATION_IDS = list(range(1, 22)) 
    
    # --- Step 1: Pre-calculation check and Global Stats loading --- (if needed)
    print("Step 1: Saving precomputed scalograms...")
    
    # Crea le cartelle output
    OUTPUT_PATH.mkdir(exist_ok=True)
    SCALOGRAM_PATH.mkdir(exist_ok=True)

    if Path(GLOBAL_STATS_PATH).exists():
        # Se il file esiste, carica i valori salvati
        stats = np.load(GLOBAL_STATS_PATH)
        GLOBAL_MEAN, GLOBAL_STD = stats[0], stats[1]
        print(f"\nStatistiche Globali caricate da file: Mean={GLOBAL_MEAN:.6f}, Std={GLOBAL_STD:.6f}")
    else:
        # Se il file non esiste, calcola e salva
        # # Nota: Assicurati che ALLOCATION_IDS sia un elenco di tutti gli ID (es. list(range(1, 22)))
        # # Qui useremo un elenco esplicito per sicurezza:
        GLOBAL_MEAN, GLOBAL_STD = calculate_global_stats(DATA_PATH, list(range(1, 22)))


    # --- Conditional Scalogram Saving (Uncomment and run once to generate .npy files) ---
    """     
    save_precomputed_scalograms(
    allocation_ids=ALLOCATION_IDS,
    apply_preprocessing=True,         # ✅ Applica filtro e Z-score
    output_path=SCALOGRAM_PATH,
    )  
    """
    
    
    
    # --- Step 2: Run Monte Carlo CV ---
    print("\nStep 2: Running Monte Carlo Cross-Validation...")
    
    MODEL_TO_TEST = create_model_wavelet_cnn
    
    results_df = monte_carlo_cross_validation(
        data_path=DATA_PATH,
        allocation_ids=ALLOCATION_IDS,
        model_fn=MODEL_TO_TEST,
        mode='load_precomputed', 
        scalogram_path=SCALOGRAM_PATH,
        num_epochs=EPOCHS,
        lr=1e-3
    )

    print("\nProcess finished.")