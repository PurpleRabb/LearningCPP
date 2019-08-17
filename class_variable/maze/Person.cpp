#include<iostream>
#include "Person.h"

using namespace std;
class Person;

Person::Person(int x,int y,char s,Map &map):_x(x),_y(y),shape(s),_map(map) {
	setLastPos(x,y);
}

Person::~Person() {

}

void Person::setPos(int x,int y) {
	cout << "Person p:" << _x << "," << _y << endl;
}

void Person::getPos(int &x,int &y) {
	x = _x;
	y = _y;
}

void Person::getLastPos(int &x,int &y) {
	x = _last_x;
	y = _last_y;
}

void Person::setLastPos(int x,int y) {
	_last_x = x;
	_last_y = y;
	cout << "Last Person p:" << _last_x << "," << _last_y << endl;
}

void Person::walk(direction dir) {
	int x,y;
	getPos(x,y);
	switch(dir) {
		case UP:
			_y++;
			if(_map.canWalk(_x,_y)) {
				setLastPos(x,y);
				setPos(_x,_y);
			} else {
				_y--;
			}
			break;
		case DOWN:
			_y--;
			if(_map.canWalk(_x,_y)) {
				setLastPos(x,y);
				setPos(_x,_y);
			} else {
				_y++;
			}
			break;
		case RIGHT:
			_x++;
			if(_map.canWalk(_x,_y)) {
				setLastPos(x,y);
				setPos(_x,_y);
			} else {
				_x--;
			}
			break;
		case LEFT:
			_x--;
			if(_map.canWalk(_x,_y)) {
				setLastPos(x,y);
				setPos(_x,_y);
			} else {
				_x++;
			}
			break;
		default:
			break;
	}
}
