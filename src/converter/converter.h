#ifndef CONVERTER_H
#define CONVERTER_H

#include "tensorflow_loader/tf_loader.h"
#include "pytorch_saver/pt_saver.h"

bool convertModel(const TensorFlowModel& tfModel, PyTorchModel& ptModel);

#endif
