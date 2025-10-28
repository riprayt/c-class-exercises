#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int randInt, i;
	srand( time(NULL));
	
	for(i = 1; i <= 3; i++){
		randInt = rand() % 255;
		printf("%c \n", randInt);
	};
	
	
	
	return 0;
}


