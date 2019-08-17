#include <iostream>
#include <string>
using namespace std;

class A {
	public:
		A():a(10) {
			cout << "construct A" << endl;
		}
		A(const A &a) {
			this->a = a.a;
		}
		void show() {
			cout << this->a << endl;
		}
		void setValue(int value) {
			this->a = value;
		}
	private:
		int a;
};

int main() {
	A a;
	A b = a;
	a.show();
	b.show();
	a.setValue(100);
	A c=a;
	c.show();
}

