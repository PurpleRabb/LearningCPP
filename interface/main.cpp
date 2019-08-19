#include <iostream>
#include "Plane.h"
#include "Bird.h"

using namespace std;

namespace muke {
	void testFunc(Flyable *f) {
		if(f != NULL)
			f->fly(true);
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

