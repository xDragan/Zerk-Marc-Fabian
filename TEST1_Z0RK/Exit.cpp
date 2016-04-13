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
void Exit::lookdescript()const{
	printf("%s\n", look); 
}
void World::Open(dir direct){
	int i, exit=0;
	for (i = 0; i < N_EXIT; i++){
		if ((numb[i].origin == player->actual) && (direct == numb[i].direction)){
			if (numb[i].door == true && numb[i]==numb[44]){
			numb[i].door = false; exit++; 
			printf("The door is now open and you can go that way\n");
			}
			else if (numb[i] == numb[44]){ printf("You don't need to open nothing in that direction :)\n"); exit++; }
		}
	}
	if (exit == 0){ printf("I can't open a door in that direction\n"); }

}

void World::Close(dir direct){
	int i, exit = 0;
	for (i = 0; i < N_EXIT; i++){
		if ((numb[i].origin == player->actual) && (direct == numb[i].direction)){
			if (numb[i].door == false && numb[i]==numb[44]){
				numb[i].door = true; exit++;
				printf("The door is now closed\n");
			}
			else if (numb[i] == numb[44]){ printf("The door is already closed\n"); exit++; }
		}
	}
	if (exit == 0){ printf("There is no door there\n"); }

}

bool door;
dir direction;
	
