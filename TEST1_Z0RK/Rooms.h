#include <iostream>
using namespace std;


class Room{
public:
	//bool n, s, e, w;
	Exit room;
public:
	void Look(const char);
	Room(char* _name, char* _description);
private:
	char name;
	char description;


};

