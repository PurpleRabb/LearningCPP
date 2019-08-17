#ifndef _H_MAP_H
#define _H_MAP_H

#include <iostream>
#include "Person.h"
class Person;

using namespace std;
class Map {

public:
	Map();
	~Map();
	void redraw();
	void build(int *mapbits,int width,int height);
	void setPerson(Person &p);
	bool inMap(Person &p);
	bool canWalk(int x,int y);

private:
	char wall;
	char path;
	int *_mapbits;
	int _width,_height;
	int last_x,last_y,last_bit;
	int *o_map;
};
#endif

