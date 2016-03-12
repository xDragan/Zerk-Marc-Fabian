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
	 //creating rooms that are not forest:
	 test[0][2] = new Room("Base", "You are in your base");
	 test[1][0] = new Room("House", "You are in an enemy base");
	 test[1][4] = new Room("House", "You are in an enemy base");
	 test[3][2] = new Room("Safe house", "You are in an unknown safe house");
	 test[4][0] = new Room("Safe house", "You are in an unknown safe house");
	 test[4][4] = new Room("Subway entrance", "You are in front of the subway entrance");
	// creating the directions you can't move in each room:
	 test[0][0]->dir->n = false; test[0][0]->dir->w = false;
	 test[0][1]->dir->n = false;
	 test[0][2]->dir->n = false; test[0][2]->dir->e = false; test[0][2]->dir->w = false;
	 test[0][3]->dir->w = false;
	 test[0][4]->dir->n = false; test[0][4]->dir->e = false;
	 test[1][0]->dir->w = false; test[1][0]->dir->n = false; test[1][0]->dir->s = false;
	 // 1-1 1-2 1-3 remain all mov. true
	 test[1][4]->dir->e = false; test[1][4]->dir->n = false; test[1][4]->dir->s = false;
	 test[2][0]->dir->w = false;
	// 2-1 2-2 2-3 remain all mov.true
	 test[2][4]->dir->e = false;
	 test[3][0]->dir->w = false;
	 test[3][1]->dir->e = false;
	 test[3][2]->dir->e = false; test[3][2]->dir->w = false; test[3][2]->dir->s = false;
	 test[3][3]->dir->w = false;
	 test[3][4]->dir->e = false;
	 test[4][0]->dir->e = false; test[4][0]->dir->w = false; test[4][0]->dir->s = false;
	 test[4][1]->dir->w = false; test[4][1]->dir->s = false; 
	 test[4][2]->dir->n = false; test[4][2]->dir->s = false;
	 test[4][3]->dir->e = false; test[4][3]->dir->s = false;
	 test[4][4]->dir->e = false; test[4][4]->dir->w = false; test[4][4]->dir->s = false;


};