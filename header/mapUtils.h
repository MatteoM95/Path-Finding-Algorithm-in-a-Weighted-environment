#pragma once

#include <string>
#include <vector>

using Matrix = std::vector<std::vector<double>>;

Matrix readMap(const std::string& filePath);