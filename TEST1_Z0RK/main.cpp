#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "World.h"
#include "Functions.h"
#include <Windows.h>
#include <conio.h>

World* world = nullptr;

int main(){

	World* zorkworld=new World;
	char input;
	char buffer[20];
	uint t_start, t_actual, position=0;
	t_start = GetTickCount();
	MyString command;

	printf("\t Welcome to Zerk! a Zork type game created by Marc Fabian! ENJOY! :)\n\n");
	zorkworld->Help();//type all comands at the start
	while (1){//game loop
		t_actual = GetTickCount();
		if (_kbhit()){
			input = _getch();
			buffer[position++] = input;
			if (buffer[position-1] == '\r'){
				buffer[position-1] = '\0';
				printf("%s\n",buffer);
				Minus(buffer, buffer); // changes player input to full lowercase so there is no problem later reading the input
				command = buffer;
				if (zorkworld->keyboard(command) == false){
					printf("I can't understand this comand\n");
				}
				printf("\n");
				printf("___________________________________________________\n");
				zorkworld->player->actual->Look();
				printf("\n");
				position = 0;
			}
		}
}

	system("pause");
	return 0;
}
