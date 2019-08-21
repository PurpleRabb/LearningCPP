#ifndef _T_ARRAY_H_
#define _T_ARRAY_H_

#include <iostream>
using namespace std;
template <typename T,int KSize, int KValue>
class T_ARRAY {
public:
	T_ARRAY();
	~T_ARRAY();
	void display();
private:
	T *m_ptr;
};

template <typename T,int KSize, int KValue> //类外定义，每一行都要加
T_ARRAY<T,KSize,KValue>::T_ARRAY() { //注意模板类的写法
	cout << "T_ARRAY()" << endl;
	m_ptr = new T[KSize];
	for(int i=0;i<KSize;i++)
	{
		m_ptr[i] = KValue;	
	}
}

template <typename T,int KSize, int KValue>
T_ARRAY<T,KSize,KValue>::~T_ARRAY() {
	cout << "~T_ARRAY()" << endl;
	delete[] m_ptr;
	m_ptr = NULL;
}

template <typename T,int KSize, int KValue>
void T_ARRAY<T,KSize,KValue>::display() {
	for(int i=0;i<KSize;i++)
	{
		cout << m_ptr[i] << endl;
	}
}
#endif
