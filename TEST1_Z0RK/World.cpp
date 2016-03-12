#include <iostream>
#include "Character.h"
#include "World.h"
#include "Rooms.h"
using namespace std;

World::World(){
	int i,j;
	//player (name, hp)
	 player = new Character("Mark",200);
	 for (i = 0; i < 5; i++){ 
		 for (j = 0; j < 5; j++){
			 if ((i != 0 && j != 2) && (i != 1 && j != 0) && (i != 1 && j != 4) && (i != 3 && j != 2) && (i != 4 && j != 0) && (i != 4 && j != 4))
				 test[i][j] = new Room("Forest", "You are in the forest");
		 }
	 }
	 test[0][2] = new Room("Base", "You are in your base");
	 test[1][0] = new Room("House", "You are in an enemy base");
	 test[1][4] = new Room("House", "You are in an enemy base");
	 test[3][2] = new Room("Safe house", "You are in an unknown safe house");
	 test[4][0] = new Room("Safe house", "You are in an unknown safe house");
	 test[4][4] = new Room("Subway entrance", "You are in front of the subway entrance");


};