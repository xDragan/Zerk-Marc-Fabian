#include <iostream>

class World{

public:
	World();
	~World();
private:
	Character* player;
	Room* Base, *House, *Forest;
};