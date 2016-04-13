#ifndef _World
#define _World
#include <iostream>
#include "Rooms.h"
#include "Character.h"
#define N_ROOM 25
#define N_EXIT 59

class World{

public:
	World();
	~World();
public:
	bool keyboard(const char* input);
	void impo();
	void Help()const;
	void Go(dir);
	void Open(dir);
	void Close(dir);
public:
	//Room* test[N_ROOM]; // test are rooms
	Room* test;
	Room* subway;
	Exit* numb; // numb are exits
	Character* player;
private:
	int i;
	
};
#endif