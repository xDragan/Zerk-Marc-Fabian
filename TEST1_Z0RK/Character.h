#ifndef _Character
#define _Character
#include <iostream>
#include <stdio.h>
#include "Rooms.h"
enum state{move, attack, shop};

class Character:public Entity{
private:
	//types type = Characters;
public:
	state status;
	int bag; //delimites nº of items you can have in your inventory
	int hp;
	int attack;
	int armor;
	bool active = true;
	int cash;
	bool agressive;
public:
	Room* actual;
public:
	Character(int hp,const char*name);
		
};
#endif