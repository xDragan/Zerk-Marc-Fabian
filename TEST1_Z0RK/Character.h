#ifndef _Character
#define _Character
#include <iostream>
#include <stdio.h>
#include "Rooms.h"

class Character{
public:
	int bag; //delimites nº of items you can have in your inventory
public:
	Room* actual;
public:
	Character();
		
};
#endif