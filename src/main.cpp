#include <iostream>
#include <string>
#include "cli/cli_parser.h"
#include "tensorflow_loader/tf_loader.h"
#include "converter/converter.h"
#include "pytorch_saver/pt_saver.h"
#include "utils/error_handling.h"

int main(int argc, char** argv) {
    // Parse command-line arguments
    CLIArguments args = parseCLIArguments(argc, argv);

    // Load TensorFlow model
    TensorFlowModel tfModel;
    if (!loadTensorFlowModel(args.tfModelPath, tfModel)) {
        handleFatalError("Failed to load TensorFlow model.");
    }

    // Convert TensorFlow model to PyTorch model
    PyTorchModel ptModel;
    if (!convertModel(tfModel, ptModel)) {
        handleFatalError("Failed to convert model.");
    }

    // Save PyTorch model
    if (!savePyTorchModel(args.ptModelPath, ptModel)) {
        handleFatalError("Failed to save PyTorch model.");
    }

    return 0;
}
