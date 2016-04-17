#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "World.h"
#include "Functions.h"

int main(){
	World* zorkworld=new World;
	char input[20];
	MyString command;
	printf("\t Welcome to Zerk! a Zork type game created by Marc Fabian! ENJOY! :)\n\n");
	zorkworld->Help();//type all comands at the start
	//game loop
	while (1){
		printf("\n");
		printf("___________________________________________________\n");
		zorkworld->player->actual->Look();
		printf("\n");
		gets_s(input);
		Minus(input, input);// changes player input to full lowercase so there is no problem later reading the input
		command = input;
		if (zorkworld->keyboard(command) == false){
			printf("I can't understand this comand\n");
		}
	}

	system("pause");
	return 0;
}
