#include <iostream>
#include "Functions.h"

char *Minus(char* destiny, const char* origin){
	char *p = destiny;
	while (*origin != '\0'){
		if (isupper(*origin)){
			*p++ = tolower(*origin++);
		}
		else
			*p++ = *origin++;
	}
	*p = '\0';
	return destiny;
}