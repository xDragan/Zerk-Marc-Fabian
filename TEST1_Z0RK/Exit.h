#ifndef _Exit
#define _Exit
#include <iostream>
#include "Rooms.h"
#include "Entity.h"
enum dir{n,s,e,w};//north south east west


class Exit:public Entity{
private:
	types type = Exits;
public:
	bool door;
public:
	Exit(Room* orig, Room* dest, char* description, dir,bool);
	void lookdescript()const;
public:
	Room* origin;
	Room* destiny;
	dir direction;
};

#endif