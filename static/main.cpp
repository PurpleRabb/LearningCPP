#include <iostream>
#include "Tank.h"
using namespace std;

int Tank::count = 0; //类外初始化

int main() {
	Tank t1,t2,t3,t4;
	cout << Tank::getCount() << endl;
}

