#include <stdio.h>

int main(){
	char firstChar, secondChar;
	double mean;
	
	printf("Please enter the first character: ");
	firstChar = getchar();
	getchar();
	
	printf("Please enter the second character: ");
	secondChar = getchar();
	
	mean = (double)(firstChar + secondChar)/2;
	printf("\nArithmetic mean of %c and %c is %.1lf", firstChar, secondChar, mean);
	
	return 0;
}
