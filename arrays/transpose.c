#include <stdio.h>

int main(){
	int r,c;
	printf("Enter number of rows for the matrix (>=3 and <=10): ");
	scanf("%d", &r);
	if(r < 3 || r >10){
		printf("Please enter number between 3 and 10 inclusively\n");
		return 0;
	}
	printf("Enter number of columnss for the matrix (>=3 and <=10): ");
	scanf("%d", &c);
	if(r < 3 || r >10){
		printf("Please enter number between 3 and 10 inclusively\n");
		return 0;
	}
	int x[r][c], value;

	for(int i=0; i < r; i++){
		for(int j=0; j < c; j++){
			printf("Matrix[%d][%d]: ",i,j);
			scanf("%d", &value);
			x[i][j] = value;
		}	
	}

	printf("Matrix as given by you:\n");

	for(int i=0; i < r; i++){
		for(int j=0; j < c; j++){
			printf("\t%d", x[i][j]);
		}
		printf("\n");
	}

	int y[c][r], tValue;

	printf("Transpose of given matrix:\n");

	for(int i = 0; i < c; i++){
		for(int j = 0; j < r; j++){
			printf("\t%d",x[j][i]);
		}
		printf("\n");
	}

	return 0;
}