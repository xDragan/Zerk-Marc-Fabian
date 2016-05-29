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
	uint t_bob, t_lizz, position=0;
	t_bob = GetTickCount();
	t_lizz = GetTickCount();
	MyString command;

	printf("\t Welcome to Zerk! a Zork type game created by Marc Fabian! ENJOY! :)\n\n");
	zorkworld->Help();//type all comands at the start
	//->lizz->status = paralyzed;
	//zorkworld->bob->status = paralyzed;  ENEMIES PARALYZED FOR TESTING PURPOSES

	while (zorkworld->player->alive == true && zorkworld->lizz->alive == true){//game loop
		if (t_bob + 4000 < GetTickCount()){
			t_bob = GetTickCount();
			zorkworld->Npc_interact(zorkworld->bob);
		}
		//zorkworld->lizz->status = attack;
		if (t_lizz + 1000 < GetTickCount()){
			t_lizz = GetTickCount();
			zorkworld->Npc_interact(zorkworld->lizz);
		}
		if (_kbhit()){
			input = _getch();
			buffer[position++] = input;
			if (buffer[position - 1] == '\b'){
				position-=2;
			}
			if (buffer[position-1] == '\r'){
				buffer[position-1] = '\0';
				printf("%s\n",buffer);
				Minus(buffer, buffer); // changes player input to full lowercase so there is no problem later reading the input
				command = buffer;

				if (zorkworld->keyboard(command) == false){
					printf("I can't understand this comand\n");
				}
				if (zorkworld->player->status != attack){
					printf("\n");
					printf("___________________________________________________\n");
					zorkworld->player->actual->Look();
					printf("\n\n");
				}
				position = 0;
			}
		}
	}
	if (zorkworld->player->alive == true){
		printf("You have won!\n\n"); //placeholder
	}
	else{
		printf("You got REKT by Lizz!!!... tryhard more next time...\n\n");
	}
	Sleep(4000);
	system("pause");
	return 0;
}
