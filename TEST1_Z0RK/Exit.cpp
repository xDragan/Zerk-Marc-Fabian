#include <iostream>
#include "Exit.h"


Exit::Exit(Room* origin, Room* destiny, char* description, dir direction, bool door) :origin(origin), destiny(destiny), direction(direction), door(door), Entity(description, Exits){
}
void Exit::lookdescript()const{
	printf("%s\n", description.ret_str()); 
}