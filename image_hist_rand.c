#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	
	int i, k, size;
	
	printf("Please enter the size of the image: ");
	scanf("%d", &size);
	int image[size][size];
	
	for(i=0;i<size;i++){
		for(k=0;k<size;k++){
			image[i][k] = rand() % 2;
		}
	}
	
	for(i=0;i<size;i++){
		for(k=0;k<size;k++){
			printf("%d ",image[i][k]);
		}
		printf("\n");
	}
	
	//Calculating the histogram
	int hist[size];
	int rowSum;
	for(i=0;i<size;i++){
		rowSum=0;
		for(k=0;k<size;k++){
			rowSum += image[i][k];
		}
		hist[i]= rowSum;
	}
	
	printf("The Hist Array of the image:\n");
	for(i=0;i<size;i++){
		printf("%d\n", hist[i]);
	}
	return 0;
}
