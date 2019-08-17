#include<iostream>
#include "Map.h"
#include "Person.h"

using namespace std;
class Person;

Map::Map():wall('*'),path(' ') {

}

Map::~Map() {
	delete o_map;
}

bool Map::canWalk(int x,int y) {
	if(x >= 0 && x < _width && y >= 0 && y < _height) {
		if(*(o_map+((_height-1-y)*_width) + x) == 0) {
			return true;
		}
	}
	return false;
}

void Map::build(int *mapbits,int width,int height) {
	_mapbits = mapbits;
	_width = width;
	_height = height;
	cout << "build map:"<< width << height << endl;
	o_map = new int(width*height);

	for(int i=0; i<_height;i++) {
		for(int j=0;j<_width;j++) {
			*(o_map+i*_width+j) = *(_mapbits+i*_width+j);
		}
	}
}

void Map::redraw() {
	cout << "\033[2J\033[1;1H";"]]";
	for(int i=0; i<_height;i++) {
		for(int j=0;j<_width;j++) {
			if(*(_mapbits+i*_width+j) == 1) {
				cout << wall;
			}
			if(*(_mapbits+i*_width+j) == 0) {
				cout << path;
			}
			if(*(_mapbits+i*_width+j) == -1) {
				cout << 'T';
			}
		}
		cout << endl;
	}
}

void Map::setPerson(Person &p) {
	int x,y;
	int last_x,last_y;

	p.getPos(x,y);
	p.getLastPos(last_x,last_y);
	last_bit = *(o_map+((_height-1-last_y)*_width) + last_x);

	if(inMap(p)) {
	    *(_mapbits+((_height-1-last_y)*_width) + last_x) = last_bit;
		*(_mapbits+((_height-1-y)*_width) + x) = -1;
	}
}

bool Map::inMap(Person &p) {
	int x,y;
	p.getPos(x,y);
	if(x >= 0 && x < _width && y >= 0 && y < _height) {
		return true;
	}
	return false;
}

