#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "World.h"

int main(){
	World* zorkworld=new World;
	char input[20];
	printf("\t Welcome to Zerk! a Zork type game created by Marc Fabian! ENJOY! :)\n\n");
	zorkworld->Help();//type all comands at the start
	zorkworld->player->actual = zorkworld->numb[3].origin;//puting player on starting room
	//game loop
	while (1){
		printf("\n");
		printf("___________________________________________________\n");
		zorkworld->keyboard("look");
		gets_s(input);

		if (zorkworld->keyboard(input) == false){
			printf("I can't understand this comand\n");
		}
	}

	system("pause");
	return 0;
}
