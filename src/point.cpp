#include "Point.h"
#include <iostream>
#include <windows.h>

using namespace std;

Point::Point(){}

Point::Point(float weight, int x_, int y_){
	this->weight = weight;
	this->x = x_;
	this->y = y_;
}

int Point::getX() {
	return x;
}

int Point::getY() {
	return y;
}

int Point::getWeight() {
	return weight;
}

void Point::setX(int x_) {
	this->x = x_;
}

void Point::setY(int y_) {
	this->y = y_;
}

void Point::setWeight(float weight) {
	this->weight = weight;
}

void Point::printPointInfo() {
	std::cout << "X: " << x << ", Y: " << y << ", weight:" << weight << endl;
}