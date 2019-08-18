#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Person {
	
public:	
	Person(string name = "Jim") {
		m_Name = name;
		cout << "Person" << endl;
	}
	
	Person(const Person &p) {
		cout << "实参传递调用这里" << endl;
		m_Name = p.m_Name;
	}
	
	virtual ~Person() {
		cout << "~Person" << endl;
	}

	void play() {
		cout << m_Name << " Play" << endl;
	}
protected:
	string m_Name;
};

class Soilder:public Person {
	public:
		Soilder(string name = "Tom",int age=20) {
			m_Name = name;
			m_Age = age;
			cout << "Soilder" << endl;
		}
		virtual ~Soilder() {
			cout << "~Soilder" << endl;
		}
		void work() {
			cout << "work" << endl;
		}
	protected:
		int m_Age;
};

void testFunc1(Person p) {
	p.play();
}

void testFunc2(Person &p) {
	p.play();
}

void testFunc3(Person *p) {
	p->play();
}

int main(int argc, char** argv) {
	/*Soilder *p = new Soilder;
	delete p;
	p = NULL;*/
	Soilder s;
	Person p = s; //如果父类析构函数不是virtual，则子类析构函数不会被调用，造成内存泄漏 
	testFunc1(p); //注意拷贝构造函数的调用 
	//cout << "-------------" << endl;
	//testFunc2(s);
	//cout << "-------------" << endl;
	//testFunc3(p);
	return 0;
}
