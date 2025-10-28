#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int i, orArray[5], revArray[5];
	srand( time(NULL));
	
	for(i=0; i <= 4; i++)
	{
		orArray[i] = 1 + rand() % 10;
	}
	
	printf("The original array is:");
	for(i=0; i <= 4; i++)
	{
		printf("%4d", orArray[i]);
	}
	printf("\nand the reversed one is:");
	
	revArray[0] = orArray[4];
	revArray[1] = orArray[3];
	revArray[2] = orArray[2];
	revArray[3] = orArray[1];
	revArray[4] = orArray[0];
	
	for(i=0; i <= 4; i++)
	{
		printf("%4d", revArray[i]);
	}
	
	
	return 0;
}
