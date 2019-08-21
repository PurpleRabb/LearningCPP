#include <iostream>
#include "Coordinate.h"
using namespace std;

Coordinate &operator-(Coordinate &coor) {
	coor.m_X = -coor.m_X;
	coor.m_Y = -coor.m_Y;
	return coor;
}

Coordinate operator+(Coordinate &coor1,Coordinate &coor2) {
	Coordinate temp(0,0);
	temp.m_X = coor1.m_X + coor2.m_X;
	temp.m_Y = coor1.m_Y + coor2.m_Y;
	return temp;
}

ostream& operator<<(ostream &output,Coordinate &coor) {
	output << coor.m_X << "#,#" << coor.m_Y << endl;
	return output;
}

int main() {
	Coordinate coor1(10,20);
	Coordinate coor2(10,20);
	//-coor; //相当于coor.operator-();
	//cout << (coor++).getY() << endl;
	//cout << (++coor).getY() << endl;
	Coordinate newCoor = coor1 + coor2;
	cout << coor1;
	cout << "索引访问：" << newCoor[1] << endl;
	newCoor.printInfo();
}

