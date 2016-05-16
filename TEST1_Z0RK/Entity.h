#ifndef _Entity
#define _Entity
#include <iostream>
#include "MyString.h"
enum types{Characters,Exits,Items, Rooms};

class Entity{
protected:
	Entity(const char* name, const char *desc, types type);
	Entity(const char *desc, types type);
	Entity(types type);
protected:
	MyString name;
	MyString description;
	types type;
};

#endif