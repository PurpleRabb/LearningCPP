#ifndef _TIME_H_
#define _TIME_H_

/*
 * 友元全局函数
 * 友元成员函数
 * 友元类
 * */

#include <iostream>
#include "Match.h"

using namespace std;

class Time {
	friend void printTime(Time &t); //友元全局函数
	//friend class Match; //友元类
	friend void Match::printInfo(Time &t);

	public:
		Time(int hour,int min,int sec) : m_Hour(hour),m_Min(min),m_Sec(sec) {
			cout << "Time" << endl;
		}
		~Time() {
			cout << "~Time" << endl;
		}
	private:
		int m_Hour,m_Min,m_Sec;
};

#endif
