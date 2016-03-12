#include <iostream>
#include "Character.h"
using namespace std;

class Character{

	int hp;
	string name;
	Character::Character(string _name, int _hp){
		hp = _hp;
		name= _name;
	}
	//future inventary
};