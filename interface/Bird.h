#ifndef _BIRD_H_
#define _BIRD_H_
#include <iostream>
#include "I_Flyable.h"
using namespace std;

class Bird: public Flyable {
	public:
		Bird() {
			cout << "Bird" << endl;
		}
		~Bird() {
			cout << "~Bird" << endl;
		}
		void fly(bool able) {
			cout << "The bird is flying" << endl;
		}
};
#endif

