#include <stdio.h>
#include "utils/subtract.h"
#include "utils/divide.h"

int add(int, int);

int main(){
	printf("Adding functions: %d\n", add(1,2));
	printf("Subtracting functions: %d", subtract(2,1));
}

int add(int a, int b){
	return a + b;
}