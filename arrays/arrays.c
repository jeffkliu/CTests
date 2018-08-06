#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
	float arr1[20], arr2[20];

	printf("Enter maximum 20 numbers, terminate with 0.0\n");
	
	int i=0;
	float sum1=0; float sum2=0;
	float f1;

	while(i<20){
		if(i ==0){
			printf("First number: ");
		}
		else{
			printf("Next: ");
		}

		scanf("%f", &f1);

		if(f1 == 0.0 && i != 0){
			printf("There are a total of %d numbers given as input.\n", i);
			break;
		} else {
			arr1[i] = f1;
			i++;
		}
	}


	int z = 0;
	while(z<i){

		if(z==0){
			printf("\n Input Array\t2nd Array\n\n");
		}
		if(z%2 == 0){
			arr2[z] = arr1[z]*2;
		} else {
			arr2[z] = cbrt(arr1[z]);
		}
		printf("%f\t%f\n", arr1[z], arr2[z]);
		sum1 = sum1 + arr1[z];
		sum2 = sum2 + arr2[z];
		z++;
	}

	printf("Sum of first array: %f\n", sum1/i);
	printf("Sum of second array: %f\n", sum2/i);
}