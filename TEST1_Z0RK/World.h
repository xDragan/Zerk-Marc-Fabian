#include <iostream>

class World{

public:
	World();
	~World();
private:
	int i,j;
	Character* player;
	//Room* Base, *House, *Forest;
	Room* test[5][5];
};