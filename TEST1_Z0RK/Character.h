#ifndef _Character
#define _Character
#include <iostream>
#include <stdio.h>
#include "Rooms.h"

class Character{
public:
	int bag; //delimites n� of items you can have in your inventory
	int hp;
	int attack;
	int armor;
public:
	Room* actual;
public:
	Character(int hp);
		
};
#endif