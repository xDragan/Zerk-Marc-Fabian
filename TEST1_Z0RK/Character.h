#ifndef _Character
#define _Character
#include <iostream>
#include <stdio.h>
#include "Rooms.h"

class Character{

public:
	Room* actual;
public:
	Character(char*);
	~Character();
private:
		char name;
		// punter a l habitacio on esta (va cambiant amb una funcio go(salida) que modifica la habitacio actual
};
#endif