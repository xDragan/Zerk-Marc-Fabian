#include <iostream>
#include <stdio.h>
#include "Rooms.h"


	Room::Room(const char* name,const char* description):Entity(name,description,type){
	}

	void Room::Look()const{
	printf("%s", description.ret_str());
	}

