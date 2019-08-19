#ifndef _FLYABLE_H
#define _FLYABLE_H
#include <iostream>
using namespace std;

class Flyable {
	public:
		virtual void fly(bool able) = 0;
};
#endif

