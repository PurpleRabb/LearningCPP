#include <iostream>
using namespace std;

#include "Person.h"
#include "Worker.h"
#include "Farmer.h"
#include "MigrantWorker.h"

int main() {
	MigrantWorker *mw = new MigrantWorker("Tom","002","white");
	mw->Farmer::printColor();
	mw->Worker::printColor();
	delete mw;
	mw = NULL;
	return 0;
}

