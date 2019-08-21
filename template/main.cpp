#include <iostream>
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

int main() {
	cout << t_max(1,2) << endl;
	cout << t_max(1.0,2.0) << endl;
	cout << t_max('c','b') << endl;

	int x = 10;
	int y = 20;

	T_swap(x,y);
	cout << x << endl;

	char cx = 'a';
	char cy = 'b';
	T_swap(cx,cy);
	cout << cx << endl;
}

