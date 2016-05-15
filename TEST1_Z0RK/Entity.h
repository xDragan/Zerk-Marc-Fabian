#ifndef _Entity
#define _Entity
#include <iostream>
#include "MyString.h"

class Entity{
protected:
	Entity(const char* name, const char *desc);
	Entity(const char *desc);
	Entity();
protected:
	MyString name;
	MyString description;

};

#endif