#ifndef _World
#define _World
#include <iostream>
#include "Character.h"
#include "World.h"
#include "Rooms.h"
#include "Exit.h"
#include "Vector.h"
#include "Items.h"
#include "Functions.h"
#define N_ROOM 25
#define N_EXIT 59
#define N_ITEMS 9
#define CAP_BAG 10 //capacity inventory/bag of the player

class World{

public:
	World();
	~World();
public:
	bool keyboard(const MyString&);
	void LookItems()const;
	void Inventory()const;
	void Stats()const;
	void Help()const;
	void Open(const dir);
	void Close(const dir);
	void Pick(const MyString&);
	void Drop(const MyString&);
	void Equip(const MyString&);
	void UnEquip();
	void Combine(const MyString&,const MyString&);
	void Uncombine();
	bool Go(const dir,Character* npc);
	void Npc_interact(Character* npc);
	void Fight(Character* npc);
	void Attack(bool special);
	void Buy(bool sell);
	bool flag = false;
public:
	vector<Entity*>world;
	Room* subway=nullptr;
	Character* player = nullptr;
	Character* bob = nullptr;
	Character* lizz = nullptr;
	bool hardcore = false;
private:
	int i;
	
};
#endif
