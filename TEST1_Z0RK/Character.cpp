#include <iostream>
#include "Character.h"
#include "World.h"


	Character::Character(char* _name){
		 name= *_name;
	}

	void World::Go(dir nsew){
		int i, exit = 0;
		for (i = 0; i < N_EXIT; i++){
			if (numb[i].origin == player->actual && nsew == numb[i].direction &&numb[i].door == false){
				player->actual = numb[i].destiny;
				exit++;
				break;
			}
			else if (numb[i].origin == player->actual && nsew == numb[i].direction && numb[i].door == true){
				printf("There is a creepy door in this way...\n");
			}
		}
		if (exit == 0){
			printf("I can't go to that direction\n");
		}
	}
