#include <iostream>
using namespace std;

class Animal {

public:

	Animal():weight(-1) {
		cout << "Animal" << endl;
	}

	Animal(const Animal &ani):weight(-1) {
		cout << "copy animal" << endl;
		setWeight(101);
	}

	~Animal() {
		cout << "~Animal" << endl;
	}

	virtual void eat() {
		cout << "Animal's eating" << endl;
	};
	void run();
	void sleep();
	void setWeight(int w) {
		this->weight = w;
	}
	int getWeight() {
		return this->weight;
	}

private:
		enum Color {
			red,blue,green
		};
		int weight;
};

class Dog: public Animal {

public:
		Dog() {
			cout << "Dog" << endl;
		}
		~Dog() {
			cout << "~Dog" << endl;
		}

		void eat() {
			cout << "Dog's eating" << endl;
		}

		void setName(string &name) {
			this->name = name;
		}

private:
		string name;
};

int main() {
	/*Animal *p;
	Animal animal;
	Dog dog;
	p = &animal;
	p->eat();
	p = &dog;
	p->eat();*/
	/*Dog *ddd = new Dog[3];
	ddd->name = "Tom";
	cout << ddd[1].name << endl;
	ddd->eat();
	delete[] ddd;
	ddd = NULL;*/

	Animal animal;
	Animal animal2 = animal;
	cout << animal.getWeight() << endl;
	cout << animal2.getWeight() << endl;
}

