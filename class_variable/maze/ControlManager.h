#ifndef _H_CM_
#define _H_CM_

#include <iostream>
#include "Map.h"
#include "Person.h"

using namespace std;

class ControlManager {
	public:
		ControlManager(Map &map, Person &p);
		~ControlManager();
		void start();

private:
		void mixup();
		Map& _map;
		Person& _p;
		direction _dir;
};
#endif

