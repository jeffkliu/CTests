#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	printf("Hello\n");

	int x[100]={0};
	//x[0] = 100;

	printf("Size of array: %lu\n", sizeof(x));

	for(int i = 0; i<sizeof(x)/sizeof(int);i++){
		x[i] = i*2;
		printf("%d integer is: %d\n",i,x[i]);
	}

	srand(time(NULL));

}