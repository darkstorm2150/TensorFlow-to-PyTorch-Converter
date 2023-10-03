#include "file_utils.h"
#include <fstream>

bool fileExists(const std::string& path) {
    std::ifstream file(path);
    return file.good();
}
