"""
Footstep Audio Classification using TSFresh Features.

Modules:
    config: Paths, constants, and experiment settings
    preprocessing: Audio I/O, resampling, and filtering
    features: TSFresh extraction and feature name utilities
    modeling: Grid search, RFE, fine-tuning, and metrics
    visualization: PDF figures, LaTeX tables, and C code export
"""

from . import config
from . import preprocessing
from . import features
from . import modeling
from . import visualization

__all__ = ['config', 'preprocessing', 'features', 'modeling', 'visualization']
