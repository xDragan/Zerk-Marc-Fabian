#ifndef _World
#define _World
#include <iostream>
#include "Rooms.h"
#include "Character.h"
#include "Vector.h"
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
	void Go(const dir);
	void Open(const dir);
	void Close(const dir);
	void Pick(const MyString&);
	void Drop(const MyString&);
	void Equip(const MyString&);
	void UnEquip();
	void Combine(const MyString&,const MyString&);
	void Uncombine();
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
