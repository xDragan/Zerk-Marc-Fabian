#include <iostream>
#include "Items.h"

Item::Item(const char*name, const char*description, Room*location, int attack_boost):Entity(name,description),location(location),attack_boost(attack_boost){
	picked = false;
	connect = false;
	equiped = false;
}
void Item::Look() const{
	printf("%s", name.ret_str());
}