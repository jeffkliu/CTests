#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p;

	p = (int *)malloc(100);

	int i;

	for(i = 0; i < 500; i++){

		int *store = p + i;
		*p = i;

		printf("This is address of i: %p, and the value of i: %d\n", store, *p);
	}

	printf("Size of p: %d\n", *p);

	return 0;
}