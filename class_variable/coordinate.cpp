#include<iostream>
#include "coordinate.h"

Coordinate::Coordinate(int x,int y) {
	this->x = x;
	this->y = y;
	cout << "Coordinate:" << this->x << "," << this->y << endl;
}

Coordinate::~Coordinate() {
	cout << "~Coordinate" << endl;
}

void Coordinate::setX(int value) {
	this->x = value;
}

void Coordinate::setY(int value) {
	this->y = value;
}

int Coordinate::getX() {
	return this->x;
}
int Coordinate::getY() {
	return this->y;
}
