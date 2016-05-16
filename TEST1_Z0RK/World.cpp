#include <iostream>
#include "World.h"

World::World(){
	
	//player (name)
	 player = new Character(100);
	 // new room[n room]	 // test are rooms
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
	 world.pushback(new Room("Enemy Base", "With this type of decoration  this might be Lizz base..."));//[24]
	 subway = new Room("Subway Exit", "You are in the center of the subway");
	 player->actual =(Room*)world[2];//puting player on starting room
	 // new exits [n exits] 
	 // numb are exits
	 numb.pushback(new Exit((Room*)world[0], (Room*)world[1], "You see a forest with a bright light in the end", e, false));
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
	 //items:
	 items.pushback(new Item("torch", "A Torch that lights you further away", test[2],10,0));
	 items.pushback(new Item("coin", "A 5cent coin, gives you luck", test[7], 1,1));
	 items.pushback(new Item("kevlar helmet", "A kevlar helmet, gives you tons of armor", subway, 0, 70));
	 items.pushback(new Item("dagger", "A fast dagger, gives you decent damage very fast", test[5], 40, 0));
	 items.pushback(new Item("key", "A useless key... or not", test[9], 2, 0));
	 items.pushback(new Item("katana", "A big katana, deals tons of damage", test[24], 90, 0));
	 items.pushback(new Item("bulletproof shield", "A bulletproof shield, gives you some armor and a bit of damage", test[20], 5, 40));
	 items.pushback(new Item("rock", "A rock", test[0], 5, 0));
	 items.pushback(new Item("Map", "A worn map", test[4], 0, 0));
};

bool World::keyboard(const MyString& input){ //input check
	int check;
	bool keycheck = true;
	char direct[10];
	char direct2[10];
	MyString direction;
	MyString direction2;
	if (input == "look" || input == "l"){ // to look you room
		player->actual->Look();
		LookItems();
	}
	// to look what exits you see from your room:
	else if (input == "look north" || input == "look n"){
		check=0;
		for (i = 0; i < N_EXIT; i++){
			if ((numb[i]->origin == player->actual) && (n == numb[i]->direction)){
				numb[i]->lookdescript(); check++;
			}
		}
		if (check == 0){ printf("I can't see nothing in that direction\n"); }
	}
	else if (input == "look south" || input == "look s"){
		check = 0;
		for (i = 0; i < N_EXIT; i++){
			if ((numb[i]->origin == player->actual) && (s == numb[i]->direction)){
				numb[i]->lookdescript(); check++;
			}
		}
		if (check == 0){ printf("I can't see nothing in that direction\n"); }
	}
	else if (input == "look east" || input == "look e"){
		check = 0;
		for (i = 0; i < N_EXIT; i++){
			if ((numb[i]->origin == player->actual) && (e == numb[i]->direction)){
				numb[i]->lookdescript(); check++;
			}
		}
		if (check == 0){ printf("I can't see nothing in that direction\n"); }
	}
	else if (input == "look west" || input == "look w"){
		check = 0;
		for (i = 0; i < N_EXIT; i++){
			if ((numb[i]->origin == player->actual) && (w == numb[i]->direction)){
				numb[i]->lookdescript(); check++;
			}
		}
		if (check == 0){ printf("I can't see nothing in that direction\n"); }
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
	else if (input == "west" || input == "w" ){
		Go(w);
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
		for (i = 0; i < N_ITEMS; i++){
			if (items[i]->location == player->actual){
				check++;
			}
		}
		if (check != 0){
		printf("Wich thing i have to pick?\n");
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
		for (i = 0; i < N_ITEMS; i++){
			if (items[i]->picked == true){
				check++;
			}
			if (items[i]->equiped == true){
				printf("You already have 1 item equipped!");
				test++;
				//break; //FIX THISSSSSSS
			}
		}
		if (check >= 1&&test==0){
			printf("Wich item i have to equip?\n");
			Inventory();
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
		for (i = 0; i < N_ITEMS; i++){
			if (items[i]->equiped == true){
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
		for (i = 0; i < N_ITEMS; i++){
			if (items[i]->picked == true){
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
	}//
	else if (input == "uncombine" || input == "unc" || input == "uncomb"){
		check = 0;
		for (i = 0; i < N_ITEMS; i++){
			if (items[i]->connect == true){
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
	else{
		keycheck = false;
	}
	
	return keycheck;
}
void World::Open(const dir direct){
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

void World::Close(const dir direct){
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
void World::Go(const dir nsew){
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
void World::LookItems()const {
	int i;
	for (i = 0; i < N_ITEMS; i++){
		if (items[i]->location == player->actual){
			printf(", you can see a %s on the floor", items[i]->Look());
		}
	}
	printf("\n");
}
void World::Pick(const MyString& object){
	int i, check=0;
	if (player->bag == CAP_BAG){
		printf("Your inventory is full! You can only hold 10 items, search for a bigger bag or drop/combine items to make some space!\n");
	}
	else{
		for (i = 0; i < N_ITEMS; i++){
			if (items[i]->location == player->actual && object==items[i]->Look()){
				printf("%s picked!", items[i]->Look());
				items[i]->picked = true;
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
		for (i = 0; i < N_ITEMS; i++){
			if (items[i]->picked=true && object==items[i]->Look()){
				printf("%s droped!", items[i]->Look());
				items[i]->picked = false;
				player->bag--;
				items[i]->location = player->actual;
				check++;
			}
		}
		if (check == 0){
			printf("You don't have that item...");
		}
	
}

void World::Inventory()const{
	int i;
	printf("\t\tINVENTORY (%i/10)\n\n", player->bag);
	for (i = 0; i < N_ITEMS; i++){
		if (items[i]->picked == true){
			if (items[i]->equiped == true){
				printf("  (equiped)");
			}
			if (items[i]->connect == true ){
				printf("and(combined)");//, items[i]->combined->name
			}
			printf("\t- %s | ", items[i]->Look());
			printf("  %s\n", items[i]->Desc());

		}
	}
}

void World::Equip(const MyString& item){
	int check = 0;
	for (i = 0; i < N_ITEMS; i++){
		if (items[i]->picked == true && items[i]->Look()==item){
			items[i]->equiped = true;
			player->attack += items[i]->attack_boost;
			player->armor += items[i]->armor_boost;
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
	for (i = 0; i < N_ITEMS; i++){
		if (items[i]->equiped == true){
			items[i]->equiped = false;
			player->attack -= items[i]->attack_boost;
			printf("%s unequiped!", items[i]->Look());
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

	for (i = 0; i < N_ITEMS; i++){
		if (items[i]->Look() == item1 && items[i]->picked == true && items[i]->connect == false && items[i]->equiped == false){
			check++;
			it1=i;
		}
		if (items[i]->Look() == item2 && items[i]->picked == true && items[i]->connect == false && items[i]->equiped == false){
			check++;
			it2 = i;
		}
	}
	if (check == 2){
		printf("Items combined!");
		items[it1]->connect = true;
		items[it1]->attack_combined = items[it2]->attack_boost;
		items[it1]->armor_combined = items[it2]->armor_boost;
		items[it2]->connect = true;
		items[it2]->attack_combined = items[it1]->attack_boost;
		items[it2]->armor_combined = items[it1]->armor_boost;
		player->bag--;
		items[it1]->attack_boost += items[it2]->attack_boost;
		items[it1]->armor_boost += items[it2]->armor_boost;
		items[it2]->attack_boost += items[it1]->attack_boost;
		items[it2]->armor_boost += items[it1]->armor_boost;
	}
	else{
		printf("I can't combine those items...");
	}

}
void World::Uncombine(){
	player->bag++;
	for (i = 0; i < N_ITEMS; i++){
		if (items[i]->connect == true){
			items[i]->connect = false;
			items[i]->attack_boost -= items[i]->attack_combined;
			items[i]->armor_boost -= items[i]->armor_combined;
			items[i]->attack_combined=0;
			items[i]->armor_combined = 0;
		}
	}
	printf("items uncombined!");
}


void World::Stats()const{

	printf("\t-BAG: %i/10", player->bag);
	printf("\t-ATTACK: %i", player->attack);
	printf("\t-ARMOR: %i", player->armor);
	printf("\t-HP: %i/100", player->hp);
}

void World:: Help()const{//help commands

	printf("All you can do in this build is moving around the map with movement lock, look around and open/close doors\n");
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
	//delete[] numb;
	delete subway;
	//delete[] test;
	delete player;

};
