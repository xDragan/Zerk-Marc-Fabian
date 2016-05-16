#include <iostream>
#include "Items.h"

Item::Item(const char*name, const char*description, Room*location, int attack_boost, int armor_boost) :Entity(name, description, type), location(location), attack_boost(attack_boost),armor_boost(armor_boost){
	picked = false;
	connect = false;
	equiped = false;
}
Item::Item(const Item &other):Entity(type){
	location = other.location;
	picked = other.picked;
	connect = other.connect;
	equiped = other.equiped;
	attack_boost = other.attack_boost;
	armor_boost = other.armor_boost;
}
const MyString Item::Look() const{
	return name;
	//name.ret_str();
}
const MyString Item::Desc() const{
	return description;
}