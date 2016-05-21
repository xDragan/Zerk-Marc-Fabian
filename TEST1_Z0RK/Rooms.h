#ifndef _Rooms
#define _Rooms
#include <iostream>
#include "Entity.h"

class Room :public Entity{
private:
	//types type = Rooms;
public:
	void Look()const;
public:
	Room(const char* _name,const char* _description);
};
#endif

