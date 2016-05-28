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
	void Name();
protected:
	MyString name;
	MyString description;
protected:
	Entity(const char* name, const char *desc, types type);
	Entity(const char *desc, types type);
	Entity(const char *name, types type, int null);
	Entity(types type);
	
};

#endif