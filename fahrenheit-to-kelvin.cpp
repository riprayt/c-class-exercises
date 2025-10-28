#include <stdio.h>

int main(){
	float fh, kl;
	printf("Please enter the Fahrenheit value: ");
	scanf("%f", &fh);
	kl = (fh-32)/1.8 + 273.15;
	
	printf("%.2f Fahrenheit is equal to %.2f Kelvin", fh, kl);
	return 0;
}
