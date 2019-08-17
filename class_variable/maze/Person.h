#ifndef _H_PERSON_
#define _H_PERSON_

#include "Map.h"
#include <iostream>

using namespace std;
class Map;

enum direction {
	UP,DOWN,LEFT,RIGHT
};

class Point {

public:
	Point(int x,int y) {
		_x = x;
		_y = y;
	}
	int getX() {
		return _x;
	}
	int getY() {
		return _y;
	}

private:
	int _x,_y;
};

class Person {

public:
	Person(int x,int y, char s, Map &map);
	~Person();
	void setPos(int x, int y);
	void setLastPos(int x, int y);
	void getPos(int &x,int &y);
	void getLastPos(int &x,int &y);
	void walk(direction dir);

private:
	int _x;
	int _y;
	int _last_x;
	int _last_y;
	char shape;
	Map &_map;
};

#endif
