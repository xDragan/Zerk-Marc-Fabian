#include "Entity.h"

Entity::Entity(const char* name, const char *description, types type) :name(name), description(description), type(type){
}

Entity::Entity(const char *description, types type) : description(description), type(type){
}

Entity::Entity(const char *name, types type, int null) : name(name), type(type){
}

Entity::Entity(types type): type(type){
}

void Entity::Name(){
	printf("%s", name);
}

Entity::~Entity(){
}