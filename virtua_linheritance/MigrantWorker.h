#ifndef _MW_H_
#define _MW_H_
#include <iostream>
using namespace std;

class MigrantWorker : public Farmer, public Worker {
public:
	MigrantWorker(string name,string code,string color):Farmer(name,color),Worker(code,color) {
		cout << "MigrantWorker" << endl;
	}

	~MigrantWorker() {
		cout << "~MigrantWorker" << endl;
	}
};
#endif
