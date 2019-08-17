#include<iostream>
using namespace std;

namespace my_workspace {
	int min = 0;
	int max = 0;

	int func(bool __max,int a[],int count) {
		int _min = a[0];
		int _max = a[0];
		for(int i = 0; i < count; i++) {
			if(a[i] >= _max) {
				_max = a[i];
			}
			if(a[i] <= _min) {
				_min = a[i];
			}
		}
		if(__max) {
			return _max;
		} else {
			return _min;
		}
		return -1;
	}

	int getMax(int a,int b) {
		cout << "int getmax" << endl;
		if(a>b)
			return a;
		else
			return b;
	}

	double getMax(double a,double b) {
		cout << "float getmax" << endl;
		if(a>b)
			return a;
		else
			return b;
	}

}

int func(int a,int b, int c=3) {
	cout << a << "," << b << "," << c << endl;
}

int main() {
	int a = 0;
	int b = 0;
	a = 2;
	int const *p = &a; //same as const int *p = &a;
	// *p = b; //error *p is readonly
	int * const q = &a;
	//q = &b; //error q is readonly
	*q = b;
	cout << a << endl;
	const int * const k = &a;
	a = b;

	int *ptest = new int;
	*ptest = 2;
	cout << *ptest << endl;
	delete ptest;
	ptest = NULL;

	int *mtest = new int[10];
	mtest[5] = 6;
	cout << *(mtest+5) << endl;
	delete[] mtest;
	mtest = NULL;

#if 0
	int count;
	cout << "Input count:" << endl;
	cin >> count;
	if( count <= 0 || count > 10) {
		cout << "Invalid input!" << endl;
		return -1;
	}
	int i = 0;
	int a[count];
	int loop = count;

	while(loop > 0) {
		int num = 0;
		cin >> num;
		a[i] = num;
		if(i == 0) {
			my_workspace::max = a[i];
			my_workspace::min = a[i];
		}
		if(i>=2) {
			if(a[i] > my_workspace::max)
				my_workspace::max = a[i];
			if(a[i] < my_workspace::min)
				my_workspace::min = a[i];
		}
		i++;
		loop--;
	}

	cout << "max:" << my_workspace::max << endl;
	cout << "min:" << my_workspace::min << endl;
	cout << "workspace max:" << my_workspace::func(1,a,count) << endl;
	cout << "workspace min:" << my_workspace::func(0,a,count) << endl;
#endif
	func(10,-1);
	my_workspace::getMax(1,2);
	my_workspace::getMax(1.0,2.0);
}

