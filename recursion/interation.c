#include <stdio.h>

void decToBin(unsigned int n){
	while(n==1){
		printf("1");
		return;
	}
	decToBin(n/2);
	printf("%d", n%2);
}

void towerOfHanoi()

int main(){
	decToBin(10);
	return 0;
}