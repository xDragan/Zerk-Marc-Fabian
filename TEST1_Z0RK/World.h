#ifndef _World
#define _World
#include <iostream>
#include "Rooms.h"
#include "Character.h"
#include "Vector.h"
#define N_ROOM 25
#define N_EXIT 59
#define N_ITEMS 2
#define CAP_BAG 10 //capacity inventory/bag of the player

class World{

public:
	World();
	~World();
public:
	bool keyboard(MyString&);
	void LookItems();
	void Inventory();
	void Stats();
	void Help()const;
	void Go(dir);
	void Open(dir);
	void Close(dir);
	void Pick(MyString&);
	void Drop(MyString&);
	void Equip(MyString&);
	void UnEquip(MyString&);
public:
	vector<Room*>test;	// test are rooms
	Room* subway=nullptr;
	vector<Exit*>numb; // numb are exits
	Character* player= nullptr;
	vector<Item*> items;
private:
	int i;
	
};
#endif