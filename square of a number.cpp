#include <stdio.h>
#include <math.h>

int main(){
	int num, result;
	printf("please enter a number: ");
	scanf("%d", &num);
	result = pow(num,2);
	
	printf("The result is: %d ", result);
	
	return 0;
}

