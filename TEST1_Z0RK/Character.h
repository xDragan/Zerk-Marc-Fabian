#ifndef _Character
#define _Character
#include <iostream>
#include <stdio.h>
#include "Rooms.h"

class Character{

public:

public:
	Character(char*);
	~Character();
private:
		char name;
		Room* actual;
		// punter a l habitacio on esta (va cambiant amb una funcio go(salida) que modifica la habitacio actual
};
#endif