#ifndef _COOR_H_
#define _COOR_H_
#include <iostream>
using namespace std;

class Coordinate {
	friend Coordinate &operator-(Coordinate &coor); //友元函数一元运算符重载
	public:
		Coordinate(int x,int y):m_X(x),m_Y(y) {

		}
		~Coordinate() {

		}

		/*Coordinate &operator-() { //成员函数一元运算符重载
			this->m_X = -m_X;
			this->m_Y = -m_Y;
			return *this;
		}*/

		Coordinate &operator++() { //++前置运算符重载
			this->m_X++;
			this->m_Y++;
			return *this;
		}

		Coordinate operator++(int) { //++后置运算符重载,返回不是引用
			Coordinate old(*this); //拷贝构造函数
			this->m_X++;
			this->m_Y++;
			return old;
		}

		int getY() {
			return m_Y;
		}

		void printInfo() {
			cout << "X:" << this->m_X << "," << "Y:" << this->m_Y << endl;
		}
	//private:
		int m_X;
		int m_Y;
};
#endif
