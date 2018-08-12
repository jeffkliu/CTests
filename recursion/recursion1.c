#include <stdio.h>

void printMsg(int n){

	if(n == 0){
		return;
	}

	printf("Hello World\n");
	printMsg(n-1);
}

int main(){
	printMsg(3);
	return 0;
}