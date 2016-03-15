#ifndef _Rooms
#define _Rooms
#include <iostream>
#include <stdio.h>
#include "Exit.h"



class Room{
public:
	char retname();
	char retdesc();
	void Look();

public:
	char name[20];
	char description[200];
	Room(char* _name, char* _description);
	~Room();
private: 



};
#endif

