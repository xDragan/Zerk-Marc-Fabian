#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "World.h"

int main(){
	
	World* zorkworld=new World;
	


	//zorkworld.player.actual = zorkworld.test[2];
	//zorkworld.keyboard("look");
	zorkworld->player->actual = zorkworld->test[2];
	zorkworld->keyboard("look");

	
	system("pause");
	return 0;
}
