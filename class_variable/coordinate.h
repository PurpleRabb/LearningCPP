#ifndef _H_COOR_
#define _H_COOR_

#include<iostream>

using namespace std;

class Coordinate {

public:
	Coordinate(int x,int y);
	~Coordinate();
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();

private:
	int x,y;
};

#endif
