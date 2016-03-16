#include <iostream>
#include "World.h"
#include "Exit.h"


Exit::Exit(Room* orig, Room* dest, char* description, dir nsew,bool dor){
	strcpy_s(look, description);
	origin=orig;
	destiny=dest;
	direction = nsew;
	door = dor;
}
void Exit::lookdescript(){
	printf("%s\n", look); 
}
void World::Open(dir direct){
	int i, exit=0;
	for (i = 0; i < N_EXIT; i++){
		if ((numb[i]->origin == player->actual) && (direct == numb[i]->direction)){
			if (numb[i]->door == true){
			numb[i]->door = false; exit++; 
			printf("The door is now open and you can go that way\n");
			}
			else{ printf("You don't need to open nothing in that direction :)\n"); exit++; }
		}
	}
	if (exit == 0){ printf("I can't open a door in that direction\n"); }

}

//char name[30]; //strcpy del class room
//char des[300]; //strcpy del class room
bool door;
dir direction;
	
