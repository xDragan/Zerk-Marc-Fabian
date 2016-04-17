#ifndef _World
#define _World
#include <iostream>
#include "Rooms.h"
#include "Character.h"
#include "Vector.h"
#define N_ROOM 25
#define N_EXIT 59

class World{

public:
	World();
	~World();
public:
	bool keyboard(MyString& input);
	void impo();
	void Help()const;
	void Go(dir);
	void Open(dir);
	void Close(dir);
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