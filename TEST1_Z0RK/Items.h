#ifndef _Items
#define _Items
#include "Entity.h"
#include "Rooms.h"
class Item: public Entity{
private: 
	//types type = Items;
public:
	Room* location;
public:
	Item(const char*, const char*, Room*,int,int);
	Item(const Item &other);
public:
	const MyString Look() const;
	const MyString Desc() const;
	bool picked;
	bool connect;
	bool equiped;
	int attack_boost;
	int armor_boost;
	int attack_combined = 0;
	int armor_combined=0;
};


#endif