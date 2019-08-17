#ifndef _PERSON_
#define _PERSON_
#include <iostream>
using namespace std;

class Person {
public:
	Person(string color = "blue") {
		m_Color = color;
		cout << "Person" << endl;
	}
	virtual ~Person() {
		cout << "~Person" << endl;
	}
	void printColor() {
		cout << "Person Color:" << m_Color << endl;
	}
protected:
	string m_Color;
};
#endif


