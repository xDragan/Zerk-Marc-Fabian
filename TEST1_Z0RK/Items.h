#ifndef _Items
#define _Items
#include "Entity.h"

class Item: public Entity{
public:
	Room* location;
public:
	Item(const char*, const char*, Room*);
public:
	void Look() const;
	bool picked;
	bool connect;
};


#endif