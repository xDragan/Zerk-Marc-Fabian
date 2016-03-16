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
	Room(char* _name, char* _description);
private: 
	char name[20];
	char description[200];


};
#endif

