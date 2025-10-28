#include <stdio.h>
void callRef (int *test);

int main(){
	int var = 5;
	
	printf("Before the function: %d", var);
	callRef(&var);
	printf("\nAfter the function: %d", var);
	
	
	
	return 0;
}

void callRef (int *test){
	
	*test += 15;
}
