#ifndef _Entity
#define _Entity
#include <iostream>
#include "MyString.h"
#include "List.h"
enum types{NO_TYPE,Characters,Exits,Items, Rooms};

class Entity{
public:
	types type;
	list<Entity*> inside;
protected:
	MyString name;
	MyString description;
protected:
	Entity(const char* name, const char *desc, types type);
	Entity(const char *desc, types type);
	Entity(types type);
};

#endif