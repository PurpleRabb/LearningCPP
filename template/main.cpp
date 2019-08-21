#include <iostream>
#include "T_Array.h"

using namespace std;

//模板函数
template <typename T>
T t_max(T t1,T t2) {
	return (t1 > t2) ? t1:t2;
}

template <typename T>
void T_swap(T &t1, T &t2) {
	T temp = t1;
	t1 = t2;
	t2 = temp;
}

template <typename T,int size> //可以带参数
void display(T a) {
	for(int i=0;i < size; i++)
		cout << a;
	cout << endl;
}

template <typename T,typename S>
void display(T a, S b) {
	cout << "T:" << a << "S:" << b << endl;
}

int main() {
	/*cout << t_max<int>(1,2) << endl;
	cout << t_max(1.0,2.0) << endl;
	cout << t_max('c','b') << endl;

	int x = 10;
	int y = 20;

	T_swap(x,y);
	cout << x << endl;

	char cx = 'a';
	char cy = 'b';
	T_swap(cx,cy);

	display<int,10>(6);
	display<int,double>(10,2.6);
	cout << cx << endl;*/

	T_ARRAY<int,5,1> arr;
	arr.display();
}

