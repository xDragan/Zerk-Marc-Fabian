#include "Entity.h"

Entity::Entity(const char* name, const char *description) :name(name), description(description){
}

Entity::Entity(const char *description) : description(description){
}

Entity::Entity(){
}