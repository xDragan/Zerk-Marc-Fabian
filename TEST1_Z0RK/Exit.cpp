#include <iostream>
#include "World.h"
#include "Exit.h"


Exit::Exit(Room* orig, Room* dest, char* description, dir nsew,bool dor){
	look[100] = *description;
	origin=orig;
	destiny=dest;
	direction = nsew;
	door = dor;
}


//char name[30]; //strcpy del class room
//char des[300]; //strcpy del class room
bool door;
dir direction;
	
