#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int arr1[10] = {0};
	int i, n, userInput, digitToAdd;
	int total = 0;

	printf("Please note that you can input at most 10 digit number\n");
	printf("What is total number of digits in the number? ");
	scanf("%d", &n);

	for(i=0; i<n;i++){
		printf("Input next digit: ");
		scanf("%d", &userInput);
		arr1[i] = userInput;
		total = total + (pow(10,(n-i-1))*userInput);
	}
	printf("The number that you gave is: %d\n", total);
	printf("Enter a digit >=1 and <=9 to add: ");
	scanf("%d", &digitToAdd);
	printf("Result: \n%d\n", total+digitToAdd);
	return 0;
}