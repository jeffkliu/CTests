#include <stdio.h>
#include <stdlib.h>
#define MAX 30

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

void splitArray(char str[], char first[], char second[]){
	int i = 0;
	int j = 0;

	while(str[i] != '*'){
		first[j] = str[i];
		i++; j++;
	}
	j = 0; i++;

	while(str[i] != '\0'){
		second[j] = str[i];
		i++;j++;
	}
}

int main(){
	char x[]= {'a','B','C','d','e','F','g','H','L'};
	char str[] = "book*abacus";
	char first[MAX];
	char second[MAX];
	splitArray(str, first, second);
	printf("First array: %s\n", first);
	printf("Second array: %s\n", second);



	return 0;
}