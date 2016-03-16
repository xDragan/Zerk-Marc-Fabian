#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "World.h"
#include "main.h"

int main(){
	int i;
	zorkworld=new World;
	
	zorkworld->player->actual = zorkworld->test[2];
	zorkworld->keyboard("open");
	//zorkworld->numb[2]->lookdescript();

	
	system("pause");
	return 0;
}
