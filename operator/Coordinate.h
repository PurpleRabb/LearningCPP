#ifndef _COOR_H_
#define _COOR_H_
#include <iostream>
using namespace std;

class Coordinate {
	friend Coordinate &operator-(Coordinate &coor); //友元函数一元运算符重载
	friend Coordinate operator+(Coordinate &c1,Coordinate &c2); //友元函数二元运算符重载
	friend ostream &operator<<(ostream &output,Coordinate &coor); //第一个参数必须是ostream，所以只能用友元函数重载
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

		/*Coordinate operator+(const Coordinate &coor) { //成员函数二元运算符重载
			Coordinate temp(0,0);
			temp.m_X = this->m_X + coor.m_X;
			temp.m_Y = this->m_Y + coor.m_Y;
			return temp;
		}*/

		int operator[](int index) { //索引运算符重载，必须是成员函数
			switch(index) {
				case 1:
				return m_X;
				case 2:
				return m_Y;
				default:
				return -1;
			}
			return -1;
		}

		int getY() {
			return m_Y;
		}

		int getX() {
			return m_X;
		}

		void printInfo() {
			cout << "X:" << this->m_X << "," << "Y:" << this->m_Y << endl;
		}
	//private:
		int m_X;
		int m_Y;
};
#endif
