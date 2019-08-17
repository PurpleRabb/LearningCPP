#include <iostream>
#include "line.h"

using namespace std;

Line::Line(int x1,int y1,int x2,int y2):coor1(x1,y1),coor2(x2,y2) {
	cout << "Line" << endl;
}

Line::~Line() {
	cout << "~Line" << endl;
}

void Line::Show() {
	cout << "A line from point " << coor1.getX() << \
		coor1.getY() << " to " << coor2.getX() << coor2.getY() << endl;
}
