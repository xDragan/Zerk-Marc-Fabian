#ifndef _Items
#define _Items
#include "Entity.h"

class Item: public Entity{
public:
	Room* location;
	Item* combined;
public:
	Item(const char*, const char*, Room*,int);
public:
	void Look() const;
	bool picked;
	bool connect;
	bool equiped;
	int attack_boost;
};


#endif