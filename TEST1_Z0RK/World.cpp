#include <iostream>
#include "Character.h"
#include "World.h"
#include "Rooms.h"
#include "Exit.h"
#include "Vector.h"

World::World(){
	//int i;
	
	//player (name)
	 player = new Character;
	 // new room[n room]	 // test are rooms
	 test.pushback(new Room("Forest", "You are in the forest"));
	 test.pushback(new Room("Forest", "You are in the forest"));
	 test.pushback(new Room("Base", "You are in your Base"));// [2]
	 test.pushback(new Room("Forest", "You are in the forest"));
	 test.pushback(new Room("Forest", "You are in the forest"));
	 test.pushback(new Room("Safe House", "You are in an unknown Safe House"));
	 test.pushback(new Room("Forest", "You are in the forest"));//[6]
	 test.pushback(new Room("Forest", "You are in the forest"));
	 test.pushback(new Room("Forest", "You are in the forest"));
	 test.pushback(new Room("Safe House", "You are in an unknown Safe House"));
	 test.pushback(new Room("Forest", "You are in the forest"));//[10]
	 test.pushback(new Room("Forest", "You are in the forest"));
	 test.pushback(new Room("Forest", "You are in the forest"));
	 test.pushback(new Room("Forest", "You are in the forest"));
	 test.pushback(new Room("Forest", "You are in the forest"));
	 test.pushback(new Room("Forest", "You are in the forest"));
	 test.pushback(new Room("Forest", "You are in the forest"));
	 test.pushback(new Room("Subway Entrance", "You are in the subway entrance"));
	 test.pushback(new Room("Forest", "You are in the forest"));
	 test.pushback(new Room("Forest", "You are in the forest"));
	 test.pushback(new Room("Enemy Base", "Seems like you are in Bob's base..."));//[20]
	 test.pushback(new Room("Forest", "You are in the forest"));
	 test.pushback(new Room("Forest", "You are in the forest"));
	 test.pushback(new Room("Forest", "You are in the forest"));
	 test.pushback(new Room("Enemy Base", "With this type of decoration  this might be Lizz base..."));//[24]
	 subway = new Room("Subway Exit", "You are in the center of the subway");
	 player->actual =test[2];//puting player on starting room
	 // new exits [n exits] 
	 // numb are exits
	 numb.pushback(new Exit(test[0], test[1], "You see a forest with a bright light in the end", e, false));
	 numb.pushback(new Exit(test[1], test[0], "You see a deep forest", w, false));
	 numb.pushback(new Exit(test[1], test[6], "You see a forest with a bright light coming from somewhere", s, false));
	 numb.pushback(new Exit(test[2], test[7], "You see a deep forest", s, false));
	 numb.pushback(new Exit(test[3], test[8], "You see a forest with a bright light coming from somewhere", s, false));
	 numb.pushback(new Exit(test[3], test[4], "You see a deep forest", e, false));
	 numb.pushback(new Exit(test[4], test[3], "You see a deep forest", w, false));
	 numb.pushback(new Exit(test[5], test[6], "You see a deep forest", e, false));
	 numb.pushback(new Exit(test[6], test[5], "You see a dirty and creppy safe house..", w, false));
	 numb.pushback(new Exit(test[6], test[1], "You see a deep forest", n, false));
	 numb.pushback(new Exit(test[6], test[7], "You see a forest with a bright light coming from somewhere", e, false));
	 numb.pushback(new Exit(test[6], test[11], "You see a deep forest", s, false));
	 numb.pushback(new Exit(test[7], test[6], "You see a forest with a bright light coming from somewhere", w, false));
	 numb.pushback(new Exit(test[7], test[2], "You see your clean and beautiful base", n, false));
	 numb.pushback(new Exit(test[7], test[8], "You see a forest with a bright light coming from somewhere", e, false));
	 numb.pushback(new Exit(test[7], test[12], "You see a forest with a bright light coming from somewhere", s, false));
	 numb.pushback(new Exit(test[8], test[3], "You see a deep forest ", n, false));
	 numb.pushback(new Exit(test[8], test[7], "You see a forest with a bright light coming from somewhere", w, false));
	 numb.pushback(new Exit(test[8], test[13], "You see a deep forest", s, false));
	 numb.pushback(new Exit(test[8], test[9], "You see a dirty and creppy safe house..", e, false));
	 numb.pushback(new Exit(test[9], test[8], "You see a deep forest", w, false));
	 numb.pushback(new Exit(test[10], test[11], "You see deep forest", e, false));
	 numb.pushback(new Exit(test[10], test[15], "You see a forest with a bright light coming from somewhere", s, false));
	 numb.pushback(new Exit(test[11], test[6], "You see a forest with a bright light coming from somewhere", n, false));
	 numb.pushback(new Exit(test[11], test[10], "You see a deep forest", w, false));
	 numb.pushback(new Exit(test[11], test[12], "You see a forest with a bright light coming from somewhere", e, false));
	 numb.pushback(new Exit(test[11], test[16], "You see a deep forest", s, false));
	 numb.pushback(new Exit(test[12], test[7], "You see a forest with a bright light coming from somewhere", n, false));
	 numb.pushback(new Exit(test[12], test[11], "You see a deep forest", w, false));
	 numb.pushback(new Exit(test[12], test[13], "You see a deep forest", e, false));
	 numb.pushback(new Exit(test[12], test[17], "You see a subway entrance", s, false));
	 numb.pushback(new Exit(test[13], test[8], "You see a forest with a bright light coming from somewhere", n, false));
	 numb.pushback(new Exit(test[13], test[12], "You see a forest with a bright light coming from somewhere", w, false));
	 numb.pushback(new Exit(test[13], test[14], "You see a deep forest", e, false));
	 numb.pushback(new Exit(test[13], test[18], "You see a deep forest", s, false));
	 numb.pushback(new Exit(test[14], test[13], "You see a deep forest", w, false));
	 numb.pushback(new Exit(test[14], test[19], "You see a forest with a bright light coming from somewhere", s, false));
	 numb.pushback(new Exit(test[15], test[10], "You see a deep forest", n, false));
	 numb.pushback(new Exit(test[15], test[16], "You see a forest with a bright light coming from somewhere", e, false));
	 numb.pushback(new Exit(test[15], test[20], "You see an enemy base... might be Bob one...", s, false));
	 numb.pushback(new Exit(test[16], test[11], "You see a deep forest", n, false));
	 numb.pushback(new Exit(test[16], test[15], "You see a forest with a bright light coming from somewhere", w, false));
	 numb.pushback(new Exit(test[16], test[21], "You see a deep forest", s, false));
	 numb.pushback(new Exit(test[17], test[12], "You see a deep forest", n, false));
	 numb.pushback(new Exit(test[17], subway, "You see a door into the subway", s, true));
	 numb.pushback(new Exit(test[18], test[13], "You see a deep forest", n, false));
	 numb.pushback(new Exit(test[18], test[19], "You see a deep forest", e, false));
	 numb.pushback(new Exit(test[18], test[23], "You see a deep forest", s, false));
	 numb.pushback(new Exit(test[19], test[18], "You see a deep forest", w, false));
	 numb.pushback(new Exit(test[19], test[24], "You see an enemy base... but it's not Bob one...", s, false));
	 numb.pushback(new Exit(test[20], test[15], "You see a deep forest", n, false));
	 numb.pushback(new Exit(test[21], test[16], "You see a deep forest", n, false));
	 numb.pushback(new Exit(test[21], test[22], "You see a deep forest", e, false));
	 numb.pushback(new Exit(test[22], test[21], "You see a deep forest", w, false));
	 numb.pushback(new Exit(test[22], test[23], "You see a deep forest", e, false));
	 numb.pushback(new Exit(test[23], test[18], "You see a deep forest", n, false));
	 numb.pushback(new Exit(test[23], test[22], "You see a deep forest", w, false));
	 numb.pushback(new Exit(test[24], test[19], "You see a deep forest", n, false));
	 numb.pushback(new Exit(subway, test[17], "You see a bright light coming from upstairs", n, false));
	 // numb are exits
};

bool World::keyboard(const char* input){ //input check
	int check;
	bool keycheck = true;
	char direct[6];
	if (strcmp(input, "look") == 0 || strcmp(input, "l") == 0){ // to look you room
		player->actual->Look();
	}
	// to look what exits you see from your room:
	else if (strcmp(input, "look north") == 0 || strcmp(input, "look n") == 0){
		check=0;
		for (i = 0; i < N_EXIT; i++){
			if ((numb[i]->origin == player->actual) && (n == numb[i]->direction)){
				numb[i]->lookdescript(); check++;
			}
		}
		if (check == 0){ printf("I can't see nothing in that direction\n"); }
	}
	else if (strcmp(input, "look south") == 0 || strcmp(input, "look s") == 0){
		check = 0;
		for (i = 0; i < N_EXIT; i++){
			if ((numb[i]->origin == player->actual) && (s == numb[i]->direction)){
				numb[i]->lookdescript(); check++;
			}
		}
		if (check == 0){ printf("I can't see nothing in that direction\n"); }
	}
	else if (strcmp(input, "look east") == 0 || strcmp(input, "look e") == 0){
		check = 0;
		for (i = 0; i < N_EXIT; i++){
			if ((numb[i]->origin == player->actual) && (e == numb[i]->direction)){
				numb[i]->lookdescript(); check++;
			}
		}
		if (check == 0){ printf("I can't see nothing in that direction\n"); }
	}
	else if (strcmp(input, "look west") == 0 || strcmp(input, "look w") == 0){
		check = 0;
		for (i = 0; i < N_EXIT; i++){
			if ((numb[i]->origin == player->actual) && (w == numb[i]->direction)){
				numb[i]->lookdescript(); check++;
			}
		}
		if (check == 0){ printf("I can't see nothing in that direction\n"); }
	}
	//now the other basic inputs for movement north south east west
	else if (strcmp(input, "north")==0 || strcmp(input, "n")==0){
		Go(n);
	}
	else if (strcmp(input, "south")==0 || strcmp(input, "s")==0){
		Go(s);
	}
	else if (strcmp(input, "east") == 0 || strcmp(input, "e") == 0){
		Go(e);
	}
	else if (strcmp(input, "west") == 0 || strcmp(input, "w") == 0){
		Go(w);
	}
	//input for open a door
	else if (strcmp(input, "open")==0 || strcmp(input, "o")==0){
		printf("Wich direction do you want to open?\n");
		gets_s(direct);
		if (strcmp(direct, "n") == 0 || strcmp(direct, "north") == 0){ // preguntar Ric sobre perque no em deixa comparar normal (direct == "n");
			Open(n);
		}
		else if (strcmp(direct, "s") == 0 || strcmp(direct, "south") == 0){
			Open(s);
		}
		else if (strcmp(direct, "e") == 0 || strcmp(direct, "east") == 0){
			Open(e);
		}
		else if (strcmp(direct, "w") == 0 || strcmp(direct, "west") == 0){
			Open(w);
		}
	}
	else if (strcmp(input, "open north") == 0 || strcmp(input, "open n") == 0){
		Open(n);
	}
	else if (strcmp(input, "open south") == 0 || strcmp(input, "open s") == 0){
		Open(s);
	}
	else if (strcmp(input, "open east") == 0 || strcmp(input, "open e") == 0){
		Open(e);
	}
	else if (strcmp(input, "open west") == 0 || strcmp(input, "open w") == 0){
		Open(w);
	}
	//input for closing a door
	else if (strcmp(input, "close") == 0 || strcmp(input, "c") == 0){
		printf("Wich direction i have to close?");
		gets_s(direct);
		if (strcmp(direct, "n") == 0 || strcmp(direct, "north") == 0){ // preguntar Ric sobre perque no em deixa comparar normal (direct == "n");
			Close(n);
		}
		else if (strcmp(direct, "s") == 0 || strcmp(direct, "south") == 0){
			Close(s);
		}
		else if (strcmp(direct, "e") == 0 || strcmp(direct, "east") == 0){
			Close(e);
		}
		else if (strcmp(direct, "w") == 0 || strcmp(direct, "west") == 0){
			Close(w);
		}
	}
	else if (strcmp(input, "close north") == 0 || strcmp(input, "close n") == 0){
		Close(n);
	}
	else if (strcmp(input, "close south") == 0 || strcmp(input, "close s") == 0){
		Close(s);
	}
	else if (strcmp(input, "close east") == 0 || strcmp(input, "close e") == 0){
		Close(e);
	}
	else if (strcmp(input, "close west") == 0 || strcmp(input, "close w") == 0){
		Close(w);
	}
	//help input
	else if (strcmp(input, "help") == 0 || strcmp(input, "h") == 0){
		Help();
	}
	//quit
	else if (strcmp(input, "quit") == 0 || strcmp(input, "q") == 0){
		printf("\n\t\tThanks for playing!\n\n");
		system("pause");
		exit(0);
	} 
	else{
		keycheck = false;
	}
	
	return keycheck;
}
void World::Open(dir direct){
	int i, exit = 0;
	for (i = 0; i < N_EXIT; i++){
		if ((numb[i]->origin == player->actual) && (direct == numb[i]->direction)){
			if (numb[i]->door == true && i == 44){
				numb[i]->door = false; exit++;
				printf("The door is now open and you can go that way\n");
			}
			else if (i == 44){ printf("You don't need to open nothing in that direction :)\n"); exit++; }
		}
	}
	if (exit == 0){ printf("I can't open a door in that direction\n"); }

}

void World::Close(dir direct){
	int i, exit = 0;
	for (i = 0; i < N_EXIT; i++){
		if ((numb[i]->origin == player->actual) && (direct == numb[i]->direction)){
			if (numb[i]->door == false && i == 44){
				numb[i]->door = true; exit++;
				printf("The door is now closed\n");
			}
			else if (i == 44){ printf("The door is already closed\n"); exit++; }
		}
	}
	if (exit == 0){ printf("There is no door there\n"); }

}
void World::Go(dir nsew){
	int i, exit = 0;
	for (i = 0; i < N_EXIT; i++){
		if (numb[i]->origin == player->actual && nsew == numb[i]->direction &&numb[i]->door == false){
			player->actual = numb[i]->destiny;
			exit++;
			break;
		}
		else if (numb[i]->origin == player->actual && nsew == numb[i]->direction && numb[i]->door == true){
			printf("There is a creepy door in this way...\n");
		}
	}
	if (exit == 0){
		printf("I can't go to that direction\n");
	}
}

void World:: Help()const{//help commands

	printf("All you can do in this build is moving around the map with movement lock, look around and open/close doors\n");
	printf("- Commands:\n");
	printf("\t- Movement: north/n, south/s, east/e, west/w\n");
	printf("\t- Look description of your base: look/l\n");
	printf("\t- Look to a direction: look north/look n, look south/look s... \n");
	printf("\t- Open/Close a door: open, open north/open n, open south/open s...\n  ");
	printf("\t- Quit: quit\n\n\n");
};

World::~World(){//destructor deleting dynamic memory
	//delete[] numb;
	delete subway;
	//delete[] test;
	delete player;

};
