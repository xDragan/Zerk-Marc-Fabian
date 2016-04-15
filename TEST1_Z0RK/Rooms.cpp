#include <iostream>
#include <stdio.h>
#include "Rooms.h"
#include "Exit.h"
#include "World.h"


	Room::Room(const char* _name,const char* _description){
		strcpy_s(name, _name);
		strcpy_s(description, _description);

	}
	char Room::retname(){
		return name[20];
	}
	char Room::retdesc(){
		return description[200];
	}
	void Room::Look(){
	printf("%s\n", description);
	}

