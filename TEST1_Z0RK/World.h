#ifndef _World
#define _World
#include <iostream>
#include "Rooms.h"
#include "Character.h"
#define N_ROOM 25

// private ni lectura ni modificar
// const si lectura no modificar
class World{
public:
	bool keyboard(const char* input);
public:
	World();
	~World();
	void impo();
public:
	Room* test[N_ROOM];
	Room* subway;// 
	Exit* numb[58];
	Character* player;
private:
	int i;
	//Room* Base, *House, *Forest;
	//Room* test[5][5];
};
#endif