#include <stdio.h>

void printArray(char *p_arr){
	int currVal, i=0;
	printf("Size of array is: %lu", sizeof(*p_arr));
	while(*(p_arr+i)!='\0'){
		currVal = *(p_arr + i);
		if(currVal>= 65 && currVal<= 90){
			printf("This is uppercase. Lowercase is: %c\n", currVal+32);
		} else if(currVal>= 97 && currVal<= 122){
			printf("This is lowercase. Uppercase is: %c\n", currVal-32);
		}
		i++;
	}
}

int main(){
	char x[]= {'a','B','C','d','e','F','g','H','L'};

	char input[100];
	scanf("%[^\n]", input);

	printArray(input);

	return 0;
}