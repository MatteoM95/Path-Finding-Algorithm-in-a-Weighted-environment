#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using Matrix = std::vector<std::vector<double>>;

Matrix readMap(const std::string& filePath) {
    std::ifstream file(filePath);
    if (!file) {
        throw std::runtime_error("Cannot open file: " + filePath);
    }

    Matrix map;
    std::string line;
    std::size_t lineNumber = 0;

    // Read and create the matrix
    while (std::getline(file, line)) {
        ++lineNumber;
        std::istringstream stream(line);
        std::vector<double> row;

        while (true) {
            stream >> std::ws;
            if (stream.eof()) {
                break;
            }

            double value;
            if (!(stream >> value)) {
                throw std::runtime_error(
                    "Invalid number on line " + std::to_string(lineNumber));
            }

            row.push_back(value);
        }

        // Skip blank lines.
        if (row.empty()) {
            continue;
        }

        if (!map.empty() && row.size() != map.front().size()) {
            throw std::runtime_error(
                "Inconsistent column count on line "
                + std::to_string(lineNumber));
        }

        map.push_back(std::move(row));
    }

    if (file.bad()) {
        throw std::runtime_error("Error reading file: " + filePath);
    }

    if (map.empty()) {
        throw std::runtime_error("The file contains no matrix data.");
    }

    return map;
}