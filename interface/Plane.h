#ifndef _PLANE_H_
#define _PLANE_H_
#include <iostream>
#include "I_Flyable.h"

using namespace std;

class Plane: public Flyable {
	public:
		Plane() {
			cout << "Plane" << endl;
		}
		~Plane() {
			cout << "~Plane" << endl;
		}

		void fly(bool able) {
			cout << "Plane can fly" << endl;
		}
	private:
		string num;
};
#endif
