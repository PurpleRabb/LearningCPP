#include <iostream>
#include "Coordinate.h"
using namespace std;

Coordinate &operator-(Coordinate &coor) {
	coor.m_X = -coor.m_X;
	coor.m_Y = -coor.m_Y;
	return coor;
}

int main() {
	Coordinate coor(10,20);
	-coor; //相当于coor.operator-();
	//cout << (coor++).getY() << endl;
	cout << (++coor).getY() << endl;
	coor.printInfo();
}

