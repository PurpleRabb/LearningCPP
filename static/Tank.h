#ifndef _TANK_H_
#define _TANK_H_
#include <iostream>
using namespace std;

class Tank {
	public:
		Tank() {
			count++;
		}
		~Tank() {
			count--;
		}

		static int getCount() {
			return count;
		}
	private:
		static int count;
};
#endif

