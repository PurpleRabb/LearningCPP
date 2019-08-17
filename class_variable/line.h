#ifndef _H_LINE
#define _H_LINE

#include <iostream>
#include "coordinate.h"

using namespace std;

class Line {

public:
	Line(int x1,int y1,int x2,int y2);
	~Line();
	void Show();

private:
	Coordinate coor1,coor2;
};
#endif

