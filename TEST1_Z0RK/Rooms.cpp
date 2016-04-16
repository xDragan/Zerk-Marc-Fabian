#include <iostream>
#include <stdio.h>
#include "Rooms.h"
#include "Exit.h"
#include "World.h"


	Room::Room(const char* name,const char* description):Entity(name,description){
	}

	void Room::Look()const{
	printf("%s\n", description.ret_str());
	}

