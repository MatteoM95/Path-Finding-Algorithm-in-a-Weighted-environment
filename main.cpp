#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>


#include mapUtils.h

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " /data/map.txt\n";
        return 1;
    }

    //  Read weighted map
    try {
        Matrix inputMap = readMap(argv[1]);

        std::cout << "Loaded " << inputMap.size() << " rows and "
                  << inputMap.front().size() << " columns.\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }

    return 0;
}