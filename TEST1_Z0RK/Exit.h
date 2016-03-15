#ifndef _Exit
#define _Exit
#include <iostream>
#include "Rooms.h"
enum dir{n,s,e,w};
class Room;
class Exit{
public:
	Exit(Room* orig, Room* dest, char* description, dir,bool);
	void lookdescript();
public:
	Room* origin;
	Room* destiny;
	dir direction;
private:
	char look[100];
	bool door;
};

#endif