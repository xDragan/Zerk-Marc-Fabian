#include <iostream>
#include "Items.h"

Item::Item(const char*name, const char*description, Room*location):Entity(name,description),location(location){
	picked = false;
	connect = false;
}
void Item::Look() const{
	printf("%s", name.ret_str());
}