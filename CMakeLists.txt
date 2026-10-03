cmake_minimum_required(VERSION 3.16)

project(WeightedPathFinding LANGUAGES CXX)

add_executable(pathfinder
    main.cpp
    src/mapUtils.cpp
    src/utils.cpp
    src/dijkstra.cpp
    src/point.cpp
)

target_include_directories(pathfinder PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/header"
)

target_compile_features(pathfinder PRIVATE cxx_std_17)
set_target_properties(pathfinder PROPERTIES CXX_EXTENSIONS OFF)