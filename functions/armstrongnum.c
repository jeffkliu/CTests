#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isArmstrong(int num){

	int temp = num;

	char str[10];
	int length = snprintf(str, 6, "%d\n", num) - 1, total=0;

	while(num > 0){
		int digit = num % 10;
		total = total + pow(digit, length);

		num /= 10;
	}

	return temp == total;
}

int main(){
	int number;
	printf("Please enter a positive number: \n");
	scanf("%d", &number);

	printf("Is this an armstrong #? %d\n",isArmstrong(number));
}