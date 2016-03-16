#ifndef _Character
#define _Character
#include <iostream>
#include <stdio.h>
#include "Rooms.h"

class Character{
public:
	int i;
public:
	Room* actual;
public:
	Character(char*);
private:
		char name;
		
};
#endif