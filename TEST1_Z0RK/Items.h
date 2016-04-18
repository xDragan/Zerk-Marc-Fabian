#ifndef _Items
#define _Items
#include "Entity.h"

class Item: public Entity{
public:
	Room* location;
	//Item* combined;
public:
	Item(const char*, const char*, Room*,int,int);
	Item(const Item &other);
public:
	void Look() const;
	bool picked;
	bool connect;
	bool equiped;
	int attack_boost;
	int armor_boost;
	int attack_combined = 0;
	int armor_combined=0;
};


#endif