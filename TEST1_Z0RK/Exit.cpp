#include <iostream>
#include "World.h"
#include "Exit.h"


Exit::Exit(Room* orig, Room* dest, char* description, dir nsew,bool dor){
	strcpy_s(look, description);
	origin=orig;
	destiny=dest;
	direction = nsew;
	door = dor;
}
void Exit::lookdescript(){
	printf("%s\n", look); 
}

//char name[30]; //strcpy del class room
//char des[300]; //strcpy del class room
bool door;
dir direction;
	
