#include <iostream>
#include "Time.h"
#include "Match.h"

using namespace std;


void printTime(Time &t) {
	cout << "友元函数：" << t.m_Hour << ":" << t.m_Min << ":" << t.m_Sec << endl;
}

int main() {
	Time t(10,20,30);
	Match m; //友元类
	printTime(t); //友元全局函数
	//m.printTime(t);
	m.printInfo(t); //友元成员函数
	return 0;
}

