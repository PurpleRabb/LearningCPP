#include <iostream>
#include <typeinfo>
#include "Plane.h"
#include "Bird.h"


using namespace std;

namespace muke {
	void testFunc(Flyable *f) {
		if(f != NULL) {
			f->fly(true);
			cout << typeid(*f).name() << endl;
			if(typeid(*f) == typeid(Bird)) {
				Bird *bird = dynamic_cast<Bird *>(f);
				if(bird != NULL) {
					bird->eat();
				}
			}
		}
	}
}

int main() {
	Plane *p = new Plane;
	Bird *b = new Bird;
	muke::testFunc(p);
	muke::testFunc(b);
	delete p;
	delete b;
	p = NULL;
	b = NULL;
}

