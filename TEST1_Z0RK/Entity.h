#ifndef _Entity
#define _Entity
#include <iostream>
#include "MyString.h"

class Entity{
private:
	Entity(const char* name, const char *desc);
	Entity(const char *desc);
private:
	MyString name;
	MyString description;
	friend class Room;
	friend class Exit;
	friend class Item;
};

#endif