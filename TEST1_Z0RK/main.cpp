#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "World.h"
#include "Functions.h"
#include <Windows.h>
#include <conio.h>


int main(){

	World* zorkworld=new World;
	char input[20];
	uint t_start, t_actual;
	t_start = GetTickCount();
	MyString command;

	printf("\t Welcome to Zerk! a Zork type game created by Marc Fabian! ENJOY! :)\n\n");
	zorkworld->Help();//type all comands at the start

	while (1){//game loop
		t_actual = GetTickCount();
		if (_kbhit()){
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
		else{

		}
}

	system("pause");
	return 0;
}
