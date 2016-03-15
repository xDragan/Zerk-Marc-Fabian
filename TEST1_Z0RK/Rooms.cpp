#include <iostream>
#include <stdio.h>
#include "Rooms.h"
#include "Exit.h"
#include "World.h"


char name[30];
char description[300];
	Room::Room(char* _name, char* _description){
		//placeholder for testing below:
		name[30] = *_name;
		description[300] = *_description;
		
	}
	char Room::retname(){
		return name[30];
	}
	char Room::retdesc(){
		return description[300];
	}
	void Room::Look(){
		printf("%s\n", name);
		printf("%s", description);
	}

	//char GetNombre(){ return name; }
