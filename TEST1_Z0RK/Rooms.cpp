#include <iostream>
#include <stdio.h>
#include "Rooms.h"
#include "Exit.h"
#include "World.h"


char name[20];
char description[200];
	Room::Room(char* _name, char* _description){
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

	//char GetNombre(){ return name; }
