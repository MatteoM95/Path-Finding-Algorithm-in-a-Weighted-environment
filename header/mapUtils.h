#pragma once

#include <string>
#include <vector>

using Matrix = std::vector<std::vector<float>>;

Matrix readMap(const std::string& filePath);