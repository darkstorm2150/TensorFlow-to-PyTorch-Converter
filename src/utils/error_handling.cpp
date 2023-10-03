#include "error_handling.h"
#include <iostream>
#include <cstdlib>

void handleFatalError(const std::string& message) {
    std::cerr << "Error: " << message << std::endl;
    std::exit(EXIT_FAILURE);
}
