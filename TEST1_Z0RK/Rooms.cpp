#include <iostream>
#include "Rooms.h"
#include "Exit.h"
using namespace std;


	Room::Room(char* _name, char* _description){
		//placeholder for testing below:
		char name = *_name;
		char description = *_description;
		
	}
	void Look(const char _description){
		cout << "test  : " << _description << endl;
	}
	Exit* room;
	
	//bool n, s, e, w;


	/*
int main(){
	Room test("blabla", "test");
	test.room.n= true;

	return 0;
}
*/