#include <iostream>
#include "World.h"
#include "time.h"
#include "List.h"
#include <Windows.h>
#include <conio.h>

World::World(){
	
	//player (name)
	 player = new Character(150, "Markuss");
	 player->cash = 30;
	 bob = new Character(300, "Bob");
	 bob->attack = 80;
	 bob->cash = 300;
	 bob->agressive = false;
	 bob->armor = 90;
	 lizz = new Character(150, "Lizz");
	 lizz->attack = 40;
	 lizz->armor = 60;
	 lizz->agressive = true;
	 // Rooms:
	 world.pushback(new Room("Forest", "You are in the forest"));
	 world.pushback(new Room("Forest", "You are in the forest"));
	 world.pushback(new Room("Base", "You are in your Base"));// [2]
	 world.pushback(new Room("Forest", "You are in the forest"));
	 world.pushback(new Room("Forest", "You are in the forest"));
	 world.pushback(new Room("Safe House", "You are in an unknown Safe House"));
	 world.pushback(new Room("Forest", "You are in the forest"));//[6]
	 world.pushback(new Room("Forest", "You are in the forest"));
	 world.pushback(new Room("Forest", "You are in the forest"));
	 world.pushback(new Room("Safe House", "You are in an unknown Safe House"));
	 world.pushback(new Room("Forest", "You are in the forest"));//[10]
	 world.pushback(new Room("Forest", "You are in the forest"));
	 world.pushback(new Room("Forest", "You are in the forest"));
	 world.pushback(new Room("Forest", "You are in the forest"));
	 world.pushback(new Room("Forest", "You are in the forest"));
	 world.pushback(new Room("Forest", "You are in the forest"));
	 world.pushback(new Room("Forest", "You are in the forest"));
	 world.pushback(new Room("Subway Entrance", "You are in the subway entrance"));
	 world.pushback(new Room("Forest", "You are in the forest"));
	 world.pushback(new Room("Forest", "You are in the forest"));
	 world.pushback(new Room("Enemy Base", "Seems like you are in Bob's base..."));//[20]
	 world.pushback(new Room("Forest", "You are in the forest"));
	 world.pushback(new Room("Forest", "You are in the forest"));
	 world.pushback(new Room("Forest", "You are in the forest"));
	 world.pushback(new Room("Lizz Base", "With this type of decoration  this might be Lizz base..."));//[24]
	 subway = new Room("Subway Exit", "You are in the center of the subway");
	 player->actual =(Room*)world[2];//puting player on starting room
	 bob->actual = (Room*)world[20];//puting bob on starting room
	 lizz->actual = (Room*)world[24];//puting lizz on starting room
	 //Exits:
	 world.pushback(new Exit((Room*)world[0], (Room*)world[1], "You see a forest with a bright light in the end", e, false));
	 world.pushback(new Exit((Room*)world[1], (Room*)world[0], "You see a deep forest", w, false));//27
	 world.pushback(new Exit((Room*)world[1], (Room*)world[6], "You see a forest with a bright light coming from somewhere", s, false));
	 world.pushback(new Exit((Room*)world[2], (Room*)world[7], "You see a deep forest", s, false));
	 world.pushback(new Exit((Room*)world[3], (Room*)world[8], "You see a forest with a bright light coming from somewhere", s, false));
	 world.pushback(new Exit((Room*)world[3], (Room*)world[4], "You see a deep forest", e, false));
	 world.pushback(new Exit((Room*)world[4], (Room*)world[3], "You see a deep forest", w, false));
	 world.pushback(new Exit((Room*)world[5], (Room*)world[6], "You see a deep forest", e, false));
	 world.pushback(new Exit((Room*)world[6], (Room*)world[5], "You see a dirty and creppy safe house..", w, false));
	 world.pushback(new Exit((Room*)world[6], (Room*)world[1], "You see a deep forest", n, false));
	 world.pushback(new Exit((Room*)world[6], (Room*)world[7], "You see a forest with a bright light coming from somewhere", e, false));
	 world.pushback(new Exit((Room*)world[6], (Room*)world[11], "You see a deep forest", s, false));
	 world.pushback(new Exit((Room*)world[7], (Room*)world[6], "You see a forest with a bright light coming from somewhere", w, false));
	 world.pushback(new Exit((Room*)world[7], (Room*)world[2], "You see your clean and beautiful base", n, false));
	 world.pushback(new Exit((Room*)world[7], (Room*)world[8], "You see a forest with a bright light coming from somewhere", e, false));
	 world.pushback(new Exit((Room*)world[7], (Room*)world[12], "You see a forest with a bright light coming from somewhere", s, false));
	 world.pushback(new Exit((Room*)world[8], (Room*)world[3], "You see a deep forest ", n, false));
	 world.pushback(new Exit((Room*)world[8], (Room*)world[7], "You see a forest with a bright light coming from somewhere", w, false));
	 world.pushback(new Exit((Room*)world[8], (Room*)world[13], "You see a deep forest", s, false));
	 world.pushback(new Exit((Room*)world[8], (Room*)world[9], "You see a dirty and creppy safe house..", e, false));
	 world.pushback(new Exit((Room*)world[9], (Room*)world[8], "You see a deep forest", w, false));
	 world.pushback(new Exit((Room*)world[10], (Room*)world[11], "You see deep forest", e, false));
	 world.pushback(new Exit((Room*)world[10], (Room*)world[15], "You see a forest with a bright light coming from somewhere", s, false));
	 world.pushback(new Exit((Room*)world[11], (Room*)world[6], "You see a forest with a bright light coming from somewhere", n, false));
	 world.pushback(new Exit((Room*)world[11], (Room*)world[10], "You see a deep forest", w, false));//51
	 world.pushback(new Exit((Room*)world[11], (Room*)world[12], "You see a forest with a bright light coming from somewhere", e, false));
	 world.pushback(new Exit((Room*)world[11], (Room*)world[16], "You see a deep forest", s, false));
	 world.pushback(new Exit((Room*)world[12], (Room*)world[7], "You see a forest with a bright light coming from somewhere", n, false));
	 world.pushback(new Exit((Room*)world[12], (Room*)world[11], "You see a deep forest", w, false));
	 world.pushback(new Exit((Room*)world[12], (Room*)world[13], "You see a deep forest", e, false));
	 world.pushback(new Exit((Room*)world[12], (Room*)world[17], "You see a subway entrance", s, false));
	 world.pushback(new Exit((Room*)world[13], (Room*)world[8], "You see a forest with a bright light coming from somewhere", n, false));
	 world.pushback(new Exit((Room*)world[13], (Room*)world[12], "You see a forest with a bright light coming from somewhere", w, false));
	 world.pushback(new Exit((Room*)world[13], (Room*)world[14], "You see a deep forest", e, false));
	 world.pushback(new Exit((Room*)world[13], (Room*)world[18], "You see a deep forest", s, false));
	 world.pushback(new Exit((Room*)world[14], (Room*)world[13], "You see a deep forest", w, false));
	 world.pushback(new Exit((Room*)world[14], (Room*)world[19], "You see a forest with a bright light coming from somewhere", s, false));
	 world.pushback(new Exit((Room*)world[15], (Room*)world[10], "You see a deep forest", n, false));
	 world.pushback(new Exit((Room*)world[15], (Room*)world[16], "You see a forest with a bright light coming from somewhere", e, false));
	 world.pushback(new Exit((Room*)world[15], (Room*)world[20], "You see an enemy base... might be Bob one...", s, false));
	 world.pushback(new Exit((Room*)world[16], (Room*)world[11], "You see a deep forest", n, false));
	 world.pushback(new Exit((Room*)world[16], (Room*)world[15], "You see a forest with a bright light coming from somewhere", w, false));
	 world.pushback(new Exit((Room*)world[16], (Room*)world[21], "You see a deep forest", s, false));
	 world.pushback(new Exit((Room*)world[17], (Room*)world[12], "You see a deep forest", n, false));//70
	 world.pushback(new Exit((Room*)world[17], subway, "You see a door into the subway", s, true));
	 world.pushback(new Exit((Room*)world[18], (Room*)world[13], "You see a deep forest", n, false));
	 world.pushback(new Exit((Room*)world[18], (Room*)world[19], "You see a deep forest", e, false));
	 world.pushback(new Exit((Room*)world[18], (Room*)world[23], "You see a deep forest", s, false));
	 world.pushback(new Exit((Room*)world[19], (Room*)world[18], "You see a deep forest", w, false));
	 world.pushback(new Exit((Room*)world[19], (Room*)world[24], "You see an enemy base... but it's not Bob one...", s, false));
	 world.pushback(new Exit((Room*)world[20], (Room*)world[15], "You see a deep forest", n, false));
	 world.pushback(new Exit((Room*)world[21], (Room*)world[16], "You see a deep forest", n, false));
	 world.pushback(new Exit((Room*)world[21], (Room*)world[22], "You see a deep forest", e, false));
	 world.pushback(new Exit((Room*)world[22], (Room*)world[21], "You see a deep forest", w, false));
	 world.pushback(new Exit((Room*)world[22], (Room*)world[23], "You see a deep forest", e, false));
	 world.pushback(new Exit((Room*)world[23], (Room*)world[18], "You see a deep forest", n, false));
	 world.pushback(new Exit((Room*)world[23], (Room*)world[22], "You see a deep forest", w, false));
	 world.pushback(new Exit((Room*)world[24], (Room*)world[19], "You see a deep forest", n, false));
	 world.pushback(new Exit(subway, (Room*)world[17], "You see a bright light coming from upstairs", n, false));
	 //items:
	 world.pushback(new Item(3,"torch", "A Torch that lights you further away", (Room*)world[2],10,0));
	 world.pushback(new Item(100,"wad of cash", "100$", (Room*)world[7], 1, 1));
	 world.pushback(new Item(70, "kevlar helmet", "A kevlar helmet, gives you tons of armor", subway, 0, 70));
	 world.pushback(new Item(40, "dagger", "A fast dagger, gives you decent damage very fast", (Room*)world[5], 40, 0));
	 world.pushback(new Item(60, "brass knuckles", "brass knuckles, punch your enemies in the face for x2 damage!", (Room*)world[9], 60, 0));//90
	 world.pushback(new Item(NULL,"red emerald", "shiny red emerald", (Room*)world[24], 0, 0));
	 world.pushback(new Item(NULL, "green emerald", "shiny green emerald", (Room*)world[20], 0, 0));
	 world.pushback(new Item(NULL, "black emerald", "black emerald", (Room*)world[0], 0, -50));
	 world.pushback(new Item(1,"rock", "A rock", (Room*)world[0], 15, 0));
	 world.pushback(new Item(10,"Gloves", "worn gloves", (Room*)world[4], 2, 0));
	 world.pushback(new Item(100,"Medkit", "Restores full hp", nullptr, 0, 0));
	 world.pushback(new Item(200,"katana", "A big katana, deals tons of damage", nullptr, 90, 0));
	 world.pushback(new Item(70,"bulletproof shield", "A bulletproof shield, gives you some armor and a bit of damage", nullptr, 5, 40));
};

bool World::keyboard(const MyString& input){ //input check
	int check;
	bool keycheck = true;
	char direct[20];
	char direct2[20];
	MyString direction;
	MyString direction2;
	if (input == "look" || input == "l"){ // to look you room
		player->actual->Look();
		LookItems();
	}
	// to look what exits you see from your room:
	else if (input == "look north" || input == "look n"){
		check=0;
		for (i = 0; i < world.size(); i++){
			if (((Exit*)world[i])->origin == player->actual && n == ((Exit*)world[i])->direction && world[i]->type == Exits){
				((Exit*)world[i])->lookdescript(); check++;
			}
		}
		if (check == 0){ printf("I can't see nothing in that direction\n"); }
	}
	else if (input == "look south" || input == "look s"){
		check = 0;
		for (i = 0; i < world.size(); i++){
			if (((Exit*)world[i])->origin == player->actual && s == ((Exit*)world[i])->direction && world[i]->type == Exits){
				((Exit*)world[i])->lookdescript(); check++;
			}
		}
		if (check == 0){ printf("I can't see nothing in that direction\n"); }
	}
	else if (input == "look east" || input == "look e"){
		check = 0;
		for (i = 0; i < world.size(); i++){
			if (((Exit*)world[i])->origin == player->actual && e == ((Exit*)world[i])->direction && world[i]->type == Exits){
				((Exit*)world[i])->lookdescript(); check++;
			}
		}
		if (check == 0){ printf("I can't see nothing in that direction\n"); }
	}
	else if (input == "look west" || input == "look w"){
		check = 0;
		for (i = 0; i < world.size(); i++){
			if (((Exit*)world[i])->origin == player->actual && w == ((Exit*)world[i])->direction && world[i]->type == Exits){
				((Exit*)world[i])->lookdescript(); check++;
			}
		}
		if (check == 0){ printf("I can't see nothing in that direction\n"); }
	}
	//now the other basic inputs for movement north south east west
	else if (input == "north" || input == "n"){
		Go(n, player);
	}
	else if (input == "south" || input == "s"){
		Go(s, player);
	}
	else if (input == "east" || input == "e"){
		Go(e, player);
	}
	else if (input == "west" || input == "w" ){
		Go(w, player);
	}
	//input for open a door
	else if (input == "open" || input == "o"){
		printf("Wich direction do you want to open?\n");
		gets_s(direct);
		Minus(direct, direct);
		direction = direct;
		if (direction == "n" || direction == "north"){ // preguntar Ric sobre perque no em deixa comparar normal (direct == "n");
			Open(n);
		}
		else if (direction == "south" || direction == "s"){
			Open(s);
		}
		else if (direction == "east" || direction == "e"){
			Open(e);
		}
		else if (direction == "west" || direction == "w"){
			Open(w);
		}
	}
	else if (input == "open north" || input == "open n"){
		Open(n);
	}
	else if (input == "open south" || input == "open s"){
		Open(s);
	}
	else if (input == "open east" || input == "open e"){
		Open(e);
	}
	else if (input == "open west" || input == "open w"){
		Open(w);
	}
	//input for closing a door
	else if (input == "close" || input == "c"){
		printf("Wich direction i have to close?");
		gets_s(direct);
		Minus(direct, direct);
		direction = direct;
		if (direction == "n" || direction == "north"){ // preguntar Ric sobre perque no em deixa comparar normal (direct == "n");
			Close(n);
		}
		else if (direction == "south" || direction == "s"){
			Close(s);
		}
		else if (direction == "east" || direction == "e"){
			Close(e);
		}
		else if (direction == "west" || direction == "w"){
			Close(w);
		}
	}
	else if (input == "close north" || input == "close n"){
		Close(n);
	}
	else if (input == "close south" || input == "close s"){
		Close(s);
	}
	else if (input == "close east" || input == "close e"){
		Close(e);
	}
	else if (input == "close west" || input == "close w"){
		Close(w);
	}
	//help input
	else if (input == "help" || input == "h"){
		Help();
	}
	//quit
	else if (input == "quit" || input == "q"){
		printf("\n\t\tThanks for playing!\n\n");
		system("pause");
		exit(0);
	} 
	else if (input == "pick" || input == "p"){
		check = 0;
		for (i = 0; i < world.size(); i++){
			if (world[i]->type==Items && ((Item*)world[i])->location == player->actual){
				check++;
			}
		}
		if (check != 0){
		printf("Wich thing i have to pick?\n");
		fflush(stdin);
		gets_s(direct);
		Minus(direct, direct);
		direction = direct;
		Pick(direction);//call pick function
		}
		else{
			printf("There's nothing i can pick here..");
		}
	}
	else if (input == "drop" || input == "d"){
		if (player->bag!=0){
			printf("Wich thing i have to drop?\n");
			gets_s(direct);
			Minus(direct, direct);
			direction = direct;
			Drop(direction);//call pick function
		}
		else{
			printf("There's nothing i can drop...");
		}
	}
	else if (input == "inventory" || input == "i" || input == "inv"){
		Inventory();
	}
	else if (input == "equip" || input == "eq"){
		check = 0; int test = 0;
		for (i = 0; i < world.size(); i++){
			if (((Item*)world[i])->picked == true && world[i]->type == Items){
				check++;
			}
			if (((Item*)world[i])->equiped == true && world[i]->type == Items){
				printf("You already have 1 item equipped!");
				test++;
				//break; //FIX THISSSSSSS
			}
		}
		if (check >= 1&&test==0){
			printf("Wich item i have to equip?\n");
			Inventory();
			printf("\n\t");
			fflush(stdin);
			gets_s(direct);
			Minus(direct, direct);
			direction = direct;
			Equip(direction);//call equip function
		}
		else if (check==0&&test==0){
			printf("You have no items to equip");
		}
	}
	else if (input == "unequip" || input == "u" || input == "un"){
		check = 0;
		for (i = 0; i < world.size(); i++){
			if (((Item*)world[i])->equiped == true && world[i]->type == Items){
				check++;
			}
		}
		if (check != 0){
			UnEquip();//call unequip function
		}
		else{
			printf("You have no items to unequip");
		}
	}
	else if (input == "stats" || input == "stat"){
		Stats();
	}
	else if (input == "combine" || input == "c" || input == "comb"){
		check = 0;
		for (i = 0; i < world.size(); i++){
			if (((Item*)world[i])->picked == true && world[i]->type == Items){
				check++;
			}
		}
		if (check >= 2){
			printf("Wich 2 items shall i combine?");
			printf("\nPut: ");
			gets_s(direct);
			Minus(direct, direct);
			direction = direct;
			printf("Into:");
			gets_s(direct2);
			Minus(direct, direct2);
			direction2 = direct2;
			Combine(direction, direction2);
		}
		else{
			printf("I need 2 or more items to combine them!");
		}
	}
	else if (input == "uncombine" || input == "unc" || input == "uncomb"){
		check = 0;
		for (i = 0; i < world.size(); i++){
			if (((Item*)world[i])->connect == true && world[i]->type == Items){
				check++;
			}
		}
		if (check == 2){
			Uncombine();
		}
		else{
			printf("I need 2 items combined to uncombine them!");
		}
	}
	else if (input == "attack" || input == "a" || input == "att"){
		Attack(false);
	}
	else if (input == "special attack" || input == "attack special" || input == "s a"){
		Attack(true);
	}
	else if (input == "buy" || input == "b"){
		Buy(false);
	}
	else if (input == "sell" || input == "sel"){
		Buy(true);
	}
	else{
		keycheck = false;
	}
	return keycheck;
}


bool World::Go(const dir nsew, Character* npc){
	int i, exit = 0;
	npc->status = move;
	for (i = 0; i < world.size(); i++){
		if (((Exit*)world[i])->origin == npc->actual && nsew == ((Exit*)world[i])->direction && ((Exit*)world[i])->door == false && world[i]->type == Exits){
			npc->actual = ((Exit*)world[i])->destiny;
			exit++;
			break;
			return true;
		}
		else if (((Exit*)world[i])->origin == npc->actual && nsew == ((Exit*)world[i])->direction && ((Exit*)world[i])->door == true && world[i]->type == Exits && npc==player){
			printf("There is a creepy door in this way...\n");
			return false;
		}
	}
	if (npc == player && exit == 0){
		printf("I can't go to that direction\n");
		return false;
	}
	if (exit == 0){
		return false;
	}

		
}

void World::Open(const dir direct){
	int i, exit = 0;
	for (i = 0; i < world.size(); i++){
		if ((((Exit*)world[i])->origin == player->actual) && (direct == ((Exit*)world[i])->direction) && world[i]->type==Exits){
			if (((Exit*)world[i])->door == true){
				((Exit*)world[i])->door = false; exit++;
				printf("The door is now open and you can go that way\n");
			}
			else if (i == 71){ printf("You don't need to open nothing in that direction :)\n"); exit++; }
		}
	}
	if (exit == 0){ printf("I can't open a door in that direction\n"); }

}

void World::Close(const dir direct){
	int i, exit = 0;
	for (i = 0; i < world.size(); i++){
		if ((((Exit*)world[i])->origin == player->actual) && (direct == ((Exit*)world[i])->direction) && world[i]->type == Exits){
			if (((Exit*)world[i])->door == false && i == 69){
				((Exit*)world[i])->door = true; exit++;
				printf("The door is now closed\n");
			}
			else if (i == 69){ printf("The door is already closed\n"); exit++; }
		}
	}
	if (exit == 0){ printf("There is no door there\n"); }
}

void World::LookItems()const {
	int i;
	for (i = 0; i < world.size(); i++){
		if ((((Item*)world[i])->location == player->actual) && world[i]->type==Items){
			printf(", you can see a %s on the floor", ((Item*)world[i])->Look());
		}
	}
	printf("\n");
}
void World::Pick(const MyString& object){
	int i, check=0;

	if (object == "wad of cash"){
		player->cash += 100;
		printf("cash added!");
		return;
	}
	if (player->bag == CAP_BAG){
		printf("Your inventory is full! You can only hold 10 items, search for a bigger bag or drop/combine items to make some space!\n");
		return;
	}
	else{
		for (i = 0; i < world.size(); i++){
			if (((Item*)world[i])->location == player->actual && object == ((Item*)world[i])->Look() && world[i]->type == Items){
				printf("%s picked!", ((Item*)world[i])->Look());
				((Item*)world[i])->picked = true;
				((Item*)world[i])->location = nullptr;
				player->bag++;
				check++;
			}
		}
		if (check == 0){
			printf("\nCan't see a %s in this room...", object.ret_str());
		}
	}
}

void World::Drop(const MyString& object){
	int check = 0;
	for (i = 84; i < world.size(); i++){
		if (((Item*)world[i])->picked = true && object == ((Item*)world[i])->Look() ){//&& world[i]->type == Items
			printf("%s droped!", ((Item*)world[i])->Look());
			((Item*)world[i])->picked = false;
			player->bag--;
			((Item*)world[i])->location = player->actual;
			check++;
		}
	}
	if (check == 0){
		printf("You don't have that item...");
	}
	
}

void World::Inventory()const{
	int i;
	printf("\t\tINVENTORY (%i/%i)\n\n", player->bag, CAP_BAG);
	for (i = 0; i < world.size(); i++){
		if (((Item*)world[i])->picked == true&& world[i]->type==Items){
			if (((Item*)world[i])->equiped == true){
				printf("  (equiped)");
			}
			if (((Item*)world[i])->connect == true){
				printf("  (combined)");//, items[i]->combined->name
			}
			printf("\t- %s | ", ((Item*)world[i])->Look());
			printf("  %s\n", ((Item*)world[i])->Desc());

		}
	}
}

void World::Equip(const MyString& item){
	int check = 0;
	for (i = 0; i < world.size(); i++){
		if (((Item*)world[i])->picked == true && ((Item*)world[i])->Look() == item && world[i]->type==Items){
			((Item*)world[i])->equiped = true;
			player->attack += ((Item*)world[i])->attack_boost;
			player->armor += ((Item*)world[i])->armor_boost;
			printf("Item equiped!");
			player->bag--;
			check++;
		}
	}
	if (check == 0){
		printf("I don't have that item!");
	}	

}

void World::UnEquip(){
	int check = 0;
	for (i = 0; i < world.size(); i++){
		if (((Item*)world[i])->equiped == true && world[i]->type == Items){
			((Item*)world[i])->equiped = false;
			player->attack -= ((Item*)world[i])->attack_boost;
			printf("%s unequiped!", ((Item*)world[i])->Look());
			check++;
			player->bag++;
		}
	}
	if (check == 0){
		printf("I don't have that item equiped!");
	}
}

void World::Combine(const MyString& item1,const  MyString& item2){
	int check = 0,it1,it2;

	for (i = 0; i < world.size(); i++){
		if (((Item*)world[i])->Look() == item1 && ((Item*)world[i])->picked == true && ((Item*)world[i])->connect == false && ((Item*)world[i])->equiped == false && world[i]->type == Items){
			check++;
			it1=i;
		}
		if (((Item*)world[i])->Look() == item2 && ((Item*)world[i])->picked == true && ((Item*)world[i])->connect == false && ((Item*)world[i])->equiped == false && world[i]->type == Items){
			check++;
			it2 = i;
		}
	}
	if (check == 2){
		printf("Items combined!");
		((Item*)world[it1])->connect = true;
		((Item*)world[it1])->attack_combined = ((Item*)world[it2])->attack_boost;
		((Item*)world[it1])->armor_combined = ((Item*)world[it2])->armor_boost;
		((Item*)world[it2])->connect = true;
		((Item*)world[it2])->attack_combined = ((Item*)world[it1])->attack_boost;
		((Item*)world[it2])->armor_combined = ((Item*)world[it1])->armor_boost;
		player->bag--;
		((Item*)world[it1])->attack_boost += ((Item*)world[it2])->attack_boost;
		((Item*)world[it1])->armor_boost += ((Item*)world[it2])->armor_boost;
		((Item*)world[it2])->attack_boost += ((Item*)world[it1])->attack_boost;
		((Item*)world[it2])->armor_boost += ((Item*)world[it1])->armor_boost;
	}
	else{
		printf("I can't combine those items...");
	}

}
void World::Uncombine(){
	player->bag++;
	for (i = 0; i < world.size(); i++){
		if (((Item*)world[i])->connect == true&& world[i]->type==Items){
			((Item*)world[i])->connect = false;
			((Item*)world[i])->attack_boost -= ((Item*)world[i])->attack_combined;
			((Item*)world[i])->armor_boost -= ((Item*)world[i])->armor_combined;
			((Item*)world[i])->attack_combined = 0;
			((Item*)world[i])->armor_combined = 0;
		}
	}
	printf("items uncombined!");
}

void World::Npc_interact(Character* npc) {

	if (hardcore == true){
		lizz->attack++;
		bob->agressive == true;
	}
	if (lizz->hp <= 0){
		lizz->alive = false;
		return;
	}
	int dir;
	srand(time(NULL));
	dir = rand() % 4;
	if (npc->status == move){ //movement
		switch (dir){
			case 0:
				Go(n, npc);
				break;
			case 1:
				Go(s, npc);
				break;
			case 2:
				Go(e, npc);
				break;
			case 3:
				Go(w, npc);
				break;
		}
	}
	if (npc->actual == ((Room*)world[5]) || npc->actual == ((Room*)world[9])){
		printf("you hear ");
		npc->Name();
		printf(" making noise in an unknown safe house...\n\n");	
	}
	if (npc->actual == ((Room*)world[2]) && player->actual != ((Room*)world[2]) && npc == lizz && npc->status != paralyzed){
		printf("There is someone in your base!");
		world.pushback(new Item(NULL,"Note", "handwritten note", (Room*)world[2], 0, 0));
	}
	if (((Item*)world[89])->connect == true && ((Item*)world[90])->connect == true && ((Item*)world[91])->equiped == true && lizz->armor != 0 && npc->status != paralyzed){
		lizz->armor = 0;
		lizz->attack = 0;
		lizz->status = paralyzed;
		printf("\nWith the power of the emeralds you have paralized lizz, that means she can't move, or fight, now you should find her and decide her destiny... ");
		printf("Lizz is in the");
		lizz->actual->Name();
	}
	if (player->actual == lizz->actual && flag == false){
		printf("You are in the same room that Lizz!!! attack quick or run!\n");
		flag = true;
	}
	if (npc->actual == player->actual && npc->agressive==true && npc->status!=paralyzed&&player->alive==true){
		npc->status = attack;
		Fight(npc);
	}
	if (npc->actual != player->actual && (npc->status == attack || npc->status == shop)){
		npc->status = move;
		flag = false;
		interrupt = true;
	}
	if (bob->actual == player->actual && bob->agressive == false && interrupt ==false){
		printf(" - Hey Markuss! It's bob! i can buy or sell you the items that you can find on the shop!\n\n");
		bob->status = shop;
		interrupt = true;
	}
}

void World::Fight(Character* npc){

	int damage = npc->attack - (player->armor / 2);
	if (damage < 5){
		damage = 5;
	}
	srand(time(NULL));
	uint random = rand() % 3;
	if (random == 0){
		uint chance;
		if (hardcore == true){
			chance = 3;
		}
		else{
			chance = 5;
		}
		uint crit = rand() % chance;
		if (crit == 0){
			printf(" - ");
			npc->Name();
			printf(" made a critical attack and dealt you %i damage!\n", damage*2);
			player->hp -= damage*2;
		}
		else{
			printf(" - ");
			npc->Name();
			printf(" has attacked you and dealt %i damage!\n", damage);
			player->hp -= damage;
		}
		if (player->hp <= 0){
			player->alive = false;
		}
	}
	if (npc->hp<50 && player->hp>50 && hardcore == true){
		npc->status = move;
	}
	
}

void World::Attack(bool special){

	player->status = attack;
	if (lizz->actual != player->actual && bob->actual != player->actual){
		printf("there is nobody here to attack...\n");
		return;
	}
	if (lizz->actual == player->actual){
		printf("\n");
		if (special == true){
			if (player->special_attack < GetTickCount()){
				lizz->armor /= 2;
				player->special_attack = GetTickCount() + 3000; //3 sec CD
				printf(" + You have reduced Lizz armor by %i!\n",lizz->armor/2);
			}
			else{
				printf(" + Your special ability is on cooldown!\n");
			}
			return;
		}
		else{
			int damage = player->attack - (lizz->armor / 2);
			if (damage < 5){
				damage = 5;
			}
			printf(" + You have damaged Lizz for %i damage!\n", damage);
			lizz->hp -= damage;
		}
	}
	if (bob->actual == player->actual){
		printf("\n");
		bob->agressive = true;
		printf(" + You attacked your ally Bob!!! he is now agressive, care!\n");
		if (special == true){
			printf(" + Bob is inmune against armor reduction!\n");
			return;
		}
		else{
			int damage = player->attack - (bob->armor / 2);
			if (damage < 5){
				damage = 5;
			}
			printf(" + You have damaged Bob for %i damage!\n", damage);
			bob->hp -= damage;
		}
	}
}

void World::Buy(bool sell){

	if (player->bag == CAP_BAG && sell==false){
		printf("Your inventory is full! You can only hold 10 items, search for a bigger bag or drop/combine items to make some space!\n");
		return;
	}

	if (player->actual == (Room*)world[2] || bob->status==shop){
		if (sell == false){
			uint option;
			printf("\t Wich item do you want to buy? (select number)\n\n");
			printf("\t 1- Medkit, fully restores your health  [100$] \n"); 
			printf("\t 2- Katana, tons of damage  [200$]\n");
			printf("\t 3- bulletproof shield, gives you extra armor and little attack boost  [70$] \n\n\t");
			fflush(stdin);
			scanf_s("%i", &option);
			switch (option){
			case 1:
				if (player->cash >= 100){
					printf("Medkit adquired, hp restored to max!\n");
					player->hp = 150;
					player->cash -= 100;
				}
				else{
					printf("You don't have enought money for that... try selling some items\n");
				}
				break;
			case 2:
				if (player->cash >= 200 && ((Item*)world[95])->picked==false){
					printf("Katana adquired, use it at your own risk!\n");
					((Item*)world[95])->picked = true;
					player->bag++;
					player->cash -= 200;
				}
				else if (((Item*)world[95])->picked==true){
					printf("You already have that item!");
					return;
				}
				else{
					printf("You don't have enought money for that... try selling some items");
				}
				break;
			case 3:
				if (player->cash >= 70){
					printf("bulletproof shield adquired, you are now tankier!\n");
					((Item*)world[96])->picked = true;
					player -> bag++;
					player->cash -= 70;
				}
				else if (((Item*)world[96])->picked == true){
					printf("You already have that item!");
					return;
				}
				else{
					printf("You don't have enought money for that... try selling some items");
				}
				break;
			default:
				printf("You can't buy that\n");
				break;
			}
			printf("Cash remaining: [%i$] \n", player->cash);
		}
		else{
			char object[20];
			printf("Wich item do you wanna sell? (you can't buy sold items!)\n");
			Inventory();
			fflush(stdin);
			gets_s(object);
			MyString item(object);
			uint check = 0;
			for (i = 84; i < world.size(); i++){
				if (((Item*)world[i])->picked == true && item == ((Item*)world[i])->Look()){
					if (((Item*)world[i])->equiped == true){
						printf("Unequip that item before you sell it!\n");
						return;
					}
					if (((Item*)world[i])->connect == true){
						printf("Uncombine that item before you sell it!\n");
						return;
					}
					printf("\n%s sold!\n", ((Item*)world[i])->Look());
					((Item*)world[i])->picked = false;
					player->bag--;
					player->cash += (((Item*)world[i])->value);
					check++;
					printf("Cash remaining: [%i$]", player->cash);
				}
			}
				if (check == 0){
					printf("You don't have that item...");
				}
	
		}
	}
	else{
		printf("Go back to your base to buy or sell items!\n");
	}

}

void World::Stats()const{

	if (hardcore == true){
		printf("You can't see your stats in hardcore mode... HA!\n");
	}
	else{
		printf("      -BAG: %i/%i", player->bag, CAP_BAG);
		printf("\t-ATTACK: %i", player->attack);
		printf("\t-ARMOR: %i", player->armor);
		printf("\t-HP: %i/150", player->hp);
		printf("\t-CASH: %i$", player->cash);
	}

}

void World:: Help()const{//help commands

	printf("FINAL BUILD! GO TO 'github.com/xDragan/Zork-in-c--' for the readme, wiki and orientated gameplay \n");
	printf("- Commands:\n");
	printf("\t- Movement: north/n, south/s, east/e, west/w\n");
	printf("\t- Look description of your base (it looks the floor also ;) ): look/l\n");
	printf("\t- Look to a direction: look north/look n, look south/look s... \n");
	printf("\t- Open/Close a door: open, open north/open n, open south/open s...\n  ");
	printf("\t- ITEM COMMANDS:\n  ");
	printf("\t- Picking and item: Use pick/p and when asked for the item, type item name \n\t -->(ej. -pick +Wich item do you want to pick? -sword)\n  ");
	printf("\t- Droping and item: Use drop/d and when asked for the item, type item name \n  ");
	printf("\t- Equipping and item: Use equip/eq and when asked for the item, type item name \n  ");
	printf("\t- Unequipping and item: Use unequip/u/un it will automatically unequip the item you are holding \n  ");
	printf("\t- Combining items: Use combine/combin/comb and when asked for the items to combine, type their name \n\t -->(ej. -combine +Put: -sword +Into: -bag) \n  ");
	printf("\t- Uncombining items: use unc/uncombine/uncomb and will automatically uncombine the items you combined\n");
	printf("\t- Inventory: i/inv/inventory, it shows inventory items and descriptions\n");
	printf("\t- Stats: stats/stat, it shows your stats as a palyer (HP/ATTACK/ARMOR/BAG CAPACITY)\n");
	printf("\t- NOTE: YOU CAN ONLY HAVE 1 ITEM EQUIPED AND 1 ITEM COMBINED AT A TIME, GAMEPLAY RESTRICTION\n");
	printf("\t- Quit: quit\n\n\n");
};

World::~World(){//destructor deleting dynamic memory
	delete subway;
	delete player;

};
