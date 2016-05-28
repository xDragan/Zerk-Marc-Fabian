#include <iostream>
#include "Character.h"
#include "World.h"

Character::Character(int hp, const char*name) :hp(hp), Entity(name, Characters, NULL){
		bag = 0;
		attack = 5;
		armor = 0;
	}


