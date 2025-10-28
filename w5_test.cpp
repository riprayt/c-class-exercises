#include <stdio.h>

int main()
{
	int toCheck; 
	
	printf("Enter 0 or 1: ");
	scanf("%d", &toCheck);
	
	if(toCheck == 1)
	{
		printf("True");
	} 
	else
	{
		printf("False");
		printf("\nTest for else statement");
	}
	
	return 0;
}
