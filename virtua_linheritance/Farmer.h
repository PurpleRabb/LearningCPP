#ifndef _FARMER_
#define _FARMER_
#include <iostream>
using namespace std;

class Farmer:public Person {
public:
	Farmer(string name = "Jack", string color = "blue") : Person("Farmer" + color) {
		cout << "Farmer" << endl;
		m_Name = name;
	}
	virtual ~Farmer() {
		cout << "~Framer" << endl;
	}
protected:
	string m_Name;
};

#endif

