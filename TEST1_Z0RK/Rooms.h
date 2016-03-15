#ifndef _Rooms
#define _Rooms
#include <iostream>
#include <stdio.h>
#include "Exit.h"



class Room{
public:
	char name[30];
public:
	char retname();
	char retdesc();
	void Look();
public:
	
	Room(char* _name, char* _description);
	~Room();
private: 
	// char name;
	char description[300];


};
#endif

