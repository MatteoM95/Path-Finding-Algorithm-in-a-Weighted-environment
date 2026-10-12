#pragma once
#include <vector>

// Better a class?
struct Point {
    float weight; // cost
    int x;
    int y;
    int position; // unique position inside the map
}

void printPointInfo(Point p);
