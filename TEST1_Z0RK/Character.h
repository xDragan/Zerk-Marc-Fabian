#ifndef _Character
#define _Character
#include <iostream>
#include <stdio.h>
#include "Rooms.h"
enum state{move, attack, shop, paralyzed};

class Character:public Entity{
private:
	//types type = Characters;
public:
	state status;
	int bag; //delimites nº of items you can have in your inventory
	int hp;
	int attack;
	int armor;
	bool alive=true;
	int cash;
	bool agressive;
	uint special_attack=0;
public:
	Room* actual;
public:
	Character(int hp,const char*name);
		
};
#endif