#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "World.h"

int main(){
	
	World* zorkworld;
	
	zorkworld->player->actual = zorkworld->test[2];
	zorkworld->keyboard("look");
	//char neim[30] = myworld.test[2].name;
	//printf("%s",neim);
	
	system("pause");
	return 0;
}
