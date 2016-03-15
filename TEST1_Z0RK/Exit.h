#ifndef _Exit
#define _Exit
#include <iostream>
#include "Rooms.h"
enum dir{n,s,e,w};
class Room;
class Exit{
public:
	//void name(const char* name);
	Exit(Room* orig, Room* dest, char* description, dir,bool);
	//char name[30]; //strcpy del class room
	//char des[300]; //strcpy del class room
private:
	char look[100];
	Room* origin;
	Room* destiny;
	bool door;
	dir direction;
};

#endif