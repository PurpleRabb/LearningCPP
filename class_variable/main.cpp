#include <iostream>
#include "coordinate.h"
#include "line.h"
using namespace std;

int main() {
	Line *p = new Line(1,2,6,7);
	p->Show();
	delete p;
	p = NULL;
}

