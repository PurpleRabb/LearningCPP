#include <iostream>
#include "Match.h"
#include "Time.h"

using namespace std;

Match::Match() {
	cout << "Match" << endl;
}

Match::~Match() {
	cout << "~Match" << endl;
}

/*void Match::printTime(Time &t) {
	cout << "友元类：Hour:" << t.m_Hour << endl;
}*/

void Match::printInfo(Time &t) {
	cout << "友元成员函数：Hour:" << t.m_Hour << endl;
}
