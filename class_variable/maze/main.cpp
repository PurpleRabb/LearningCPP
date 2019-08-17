#include <iostream>
#include <string.h>

#include "Map.h"
#include "Person.h"
#include "ControlManager.h"
using namespace std;


int mapbits[10][10] = {
	{1,0,1,1,1,1,0,1,1,1},
	{1,0,0,1,1,1,0,1,1,1},
	{1,1,0,1,1,1,0,1,1,1},
	{1,1,0,0,0,1,0,1,1,1},
	{1,1,1,1,0,1,0,1,1,1},
	{1,1,1,0,0,0,0,1,1,1},
	{1,1,0,0,1,1,1,1,1,1},
	{1,0,0,1,1,1,1,1,1,1},
	{1,0,1,1,1,1,1,1,1,1},
	{1,0,1,1,1,1,1,1,1,1},
};

int main() {
	int size[2] = {10,10};
	cout << "\033[2J\033[1;1H";"]]"; //clear screen
	Map map;
	Person p(1,0,'T',map);
	map.build((int*)mapbits,10,10);
	ControlManager cm(map,p);
	cm.start();
}
