#include <iostream>
#include "ControlManager.h"

using namespace std;

ControlManager::ControlManager(Map &map,Person &p):_map(map),_p(p) {
}

ControlManager::~ControlManager() {

}

void ControlManager::mixup() {
	if(_map.inMap(_p)) {
		_p.walk(_dir);
		_map.setPerson(_p);
		_map.redraw();
	}
}

void ControlManager::start() {
	mixup();
	while(true) {
		char dir;
		cin >> dir;
		switch (dir) {
			case 'w':
				_dir = UP;
				cout << "UP" << endl;
				break;
			case 'a':
				_dir = LEFT;
				cout << "LEFT" << endl;
				break;
			case 's':
				_dir = DOWN;
				cout << "DOWN" << endl;
				break;
			case 'd':
				_dir = RIGHT;
				cout << "RIGHT" << endl;
				break;
			case 'q':
				return;
			default:
				continue;
		}
		mixup();
	}
}
