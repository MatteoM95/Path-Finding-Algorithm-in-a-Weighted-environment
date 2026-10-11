#include "point.h"
#include <iostream>
#include <windows.h>

using namespace std;

void printPointInfo(Point p) {
	std::cout << "Point position: " << p.position << ", X: " << p.x << ", Y: " << p.y << ", weight:" << p.weight << endl;
}