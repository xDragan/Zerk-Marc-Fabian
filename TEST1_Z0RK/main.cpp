#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "World.h"

int main(){
	World* zorkworld=new World;
	char input[20];
	printf("Welcome to Zerk! a Zork type game created by Marc Fabian! ENJOY! :)\n");
	zorkworld->Help();
	zorkworld->player->actual = zorkworld->test[2];

	while (1){
		printf("\n");
		zorkworld->keyboard("look");
		gets_s(input);

		if (zorkworld->keyboard(input) == false){
			printf("I can't understand this comand\n");
		}
	}

	system("pause");
	return 0;
}
