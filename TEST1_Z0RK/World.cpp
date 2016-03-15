#include <iostream>
#include "Character.h"
#include "World.h"
#include "Rooms.h"
#include "Exit.h"


World::World(){
	int i;
	
	//player (name, hp)
	 player = new Character("Mark");
	 // new room[n room]

	for (i = 0; i < N_ROOM; i++){
		 if (i != 2 && i != 5 && i != 9 && i != 17 && i != 20 && i != 24){
			 test[i] = new Room("Forest", "You are in the forest");
		 }
	 }
	 test[2] = new Room("Base", "You are in your Base");
	 test[5] = new Room("Safe House", "You are in an unknown Safe House");
	 test[9] = new Room("Safe House", "You are in an unknown Safe House");
	 test[17] = new Room("Subway Entrance", "You are in the subway entrance");
	 test[20] = new Room("Enemy Base", "Seems like you are in Bob's base...");
	 test[24] = new Room("Enemy Base", "With this type of decoration  this might be Lizz base...");
	 subway = new Room("Subway Exit", "The center of the subway");
	 // new exits [n exits]
	 numb[0] = new Exit(test[0], test[1], "You see a forest with a bright light in the end",e,false);
	 numb[1] = new Exit(test[1], test[0], "You see a deep forest", w, false);
	 numb[2] = new Exit(test[1], test[6], "You see a forest with a bright light coming from somewhere", s, false);
	 numb[3] = new Exit(test[2], test[7], "You see a deep forest", s, false);
	 numb[4] = new Exit(test[3], test[8], "You see a forest with a bright light coming from somewhere", s, false);
	 numb[5] = new Exit(test[3], test[4], "You see a deep forest", e, false);
	 numb[6] = new Exit(test[4], test[3], "You see a deep forest", w, false);
	 numb[7] = new Exit(test[5], test[6], "You see a deep forest", e, false);
	 numb[8] = new Exit(test[6], test[5], "You see a dirty and creppy safe house..", w, false);
	 numb[9] = new Exit(test[6], test[1], "You see a deep forest", n, false);
	 numb[10] = new Exit(test[6], test[7], "You see a forest with a bright light coming from somewhere", e, false);
	 numb[11] = new Exit(test[6], test[11], "You see a deep forest", s, false);
	 numb[12] = new Exit(test[7], test[6], "You see a forest with a bright light coming from somewhere", w, false);
	 numb[13] = new Exit(test[7], test[2], "You see your clean and beautiful base", n, false);
	 numb[14] = new Exit(test[7], test[8], "You see a forest with a bright light coming from somewhere", e, false);
	 numb[15] = new Exit(test[7], test[12], "You see a forest with a bright light coming from somewhere", s, false);
	 numb[16] = new Exit(test[8], test[3], "You see a deep forest ", n, false);
	 numb[17] = new Exit(test[8], test[7], "You see a forest with a bright light coming from somewhere", w, false);
	 numb[18] = new Exit(test[8], test[13], "You see a deep forest", s, false);
	 numb[19] = new Exit(test[8], test[9], "You see a dirty and creppy safe house..", e, false);
	 numb[20] = new Exit(test[9], test[8], "You see a deep forest", w, false);
	 numb[21] = new Exit(test[10], test[11], "You see deep forest", e, false);
	 numb[22] = new Exit(test[10], test[15], "You see a forest with a bright light coming from somewhere", s, false);
	 numb[23] = new Exit(test[11], test[6], "You see a forest with a bright light coming from somewhere", n, false);
	 numb[24] = new Exit(test[11], test[10], "You see a deep forest", w, false);
	 numb[25] = new Exit(test[11], test[12], "You see a forest with a bright light coming from somewhere", e, false);
	 numb[26] = new Exit(test[11], test[16], "You see a deep forest", s, false);
	 numb[27] = new Exit(test[12], test[7], "You see a forest with a bright light coming from somewhere", n, false);
	 numb[28] = new Exit(test[12], test[11], "You see a deep forest", w, false);
	 numb[29] = new Exit(test[12], test[13], "You see a deep forest", e, false);
	 numb[30] = new Exit(test[12], test[17], "You see a subway entrance", s, false);
	 numb[31] = new Exit(test[13], test[8], "You see a forest with a bright light coming from somewhere", n, false);
	 numb[32] = new Exit(test[13], test[12], "You see a forest with a bright light coming from somewhere", w, false);
	 numb[33] = new Exit(test[13], test[14], "You see a deep forest", e, false);
	 numb[34] = new Exit(test[13], test[18], "You see a deep forest", s, false);
	 numb[35] = new Exit(test[14], test[13], "You see a deep forest", w, false);
	 numb[36] = new Exit(test[14], test[19], "You see a forest with a bright light coming from somewhere", s, false);
	 numb[37] = new Exit(test[15], test[10], "You see a deep forest", n, false);
	 numb[38] = new Exit(test[15], test[16], "You see a forest with a bright light coming from somewhere", e, false);
	 numb[39] = new Exit(test[15], test[20], "You see an enemy base... might be Bob one...", s, false);
	 numb[40] = new Exit(test[16], test[11], "You see a deep forest", n, false);
	 numb[41] = new Exit(test[16], test[15], "You see a forest with a bright light coming from somewhere", w, false);
	 numb[42] = new Exit(test[16], test[21], "You see a deep forest", s, false);
	 numb[43] = new Exit(test[17], test[12], "You see a deep forest", n, false);
	 numb[44] = new Exit(test[17], subway, "You see a door into the subway", s, true);
	 numb[45] = new Exit(test[18], test[13], "You see a deep forest", n, false);
	 numb[46] = new Exit(test[18], test[19], "You see a deep forest", e, false);
	 numb[47] = new Exit(test[18], test[23], "You see a deep forest", s, false);
	 numb[48] = new Exit(test[19], test[18], "You see a deep forest", w, false);
	 numb[49] = new Exit(test[19], test[24], "You see an enemy base... but it's not Bob one...", s, false);
	 numb[50] = new Exit(test[20], test[15], "You see a deep forest", n, false);
	 numb[51] = new Exit(test[21], test[16], "You see a deep forest", n, false);
	 numb[52] = new Exit(test[21], test[22], "You see a deep forest", e, false);
	 numb[53] = new Exit(test[22], test[21], "You see a deep forest", w, false);
	 numb[54] = new Exit(test[22], test[23], "You see a deep forest", e, false);
	 numb[55] = new Exit(test[23], test[18], "You see a deep forest", n, false);
	 numb[56] = new Exit(test[23], test[22], "You see a deep forest", w, false);
	 numb[57] = new Exit(test[24], test[19], "You see a deep forest", n, false);

	 // for(que lee todas las salidas) para ver las salidas de cada habitacion (ya especificado origen y salida)

	 // GO?

	 //movimiento ejemplo: norte
	 // mirar si hay habitaciones al norte
	 // mirar que habitaciones con direccion norte tienen origen tu habitacion actual
	// cambiar habitacion actual del jugador al destino

	
};

bool World::keyboard(const char* input){
	int exit;
	bool keycheck = true;

	if (input == "look"){ // to look you room
		player->actual->Look();
	}
	// to look what exits you see from your room:
	else if (input == "look north" || input == "look n"){
		//player->LookTo(n);
		exit=0;
		for (i = 0; i < N_EXIT; i++){
			if ((numb[i]->origin == player->actual) && (n == numb[i]->direction)){
				numb[i]->lookdescript(); exit++;
			}
		}
		if (exit == 0){ printf("I can't see nothing in that direction\n"); }
	}
	else if (input == "look south" || input == "look s"){
		exit = 0;
		for (i = 0; i < N_EXIT; i++){
			if ((numb[i]->origin == player->actual) && (s == numb[i]->direction)){
				numb[i]->lookdescript(); exit++;
			}
		}
		if (exit == 0){ printf("I can't see nothing in that direction\n"); }
	}
	else if (input == "look east" || input == "look e"){
		exit = 0;
		for (i = 0; i < N_EXIT; i++){
			if ((numb[i]->origin == player->actual) && (e == numb[i]->direction)){
				numb[i]->lookdescript(); exit++;
			}
		}
		if (exit == 0){ printf("I can't see nothing in that direction\n"); }
	}
	else if (input == "look west" || input == "look w"){
		exit = 0;
		for (i = 0; i < N_EXIT; i++){
			if ((numb[i]->origin == player->actual) && (w == numb[i]->direction)){
				numb[i]->lookdescript(); exit++;
			}
		}
		if (exit == 0){ printf("I can't see nothing in that direction\n"); }
	}
	//now the other basic inputs for movement north south east west
	else if (input == "north" || input == "n"){
		Go(n);
	}
	else if (input == "south" || input == "s"){
		Go(s);
	}
	else if (input == "east" || input == "e"){
		Go(e);
	}
	else if (input == "west" || input == "w"){
		Go(w);
	}
		return keycheck;
}


void World::Go(dir nsew){
	int i, exit=0;
	for (i = 0; i < N_EXIT; i++)
	if (numb[i]->origin == player->actual&& nsew == numb[i]->direction){
		player->actual = numb[i]->destiny; 
		exit++;
	}
	if (exit == 0){
		printf("I can't go to that direction\n");
	}
}