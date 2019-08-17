#ifndef _WORKER_
#define _WORKER_
#include <iostream>
using namespace std;

class Worker : virtual public Person {

public:
	Worker(string code = "001", string color = "blue"):Person("Worker" + color) {
		m_Code = code;
		cout << "Worker" << endl;
	}
	virtual ~Worker() {
		cout << "~Worker" << endl;
	}
	void carry() {

	}
protected:
	string m_Code;
};
#endif
