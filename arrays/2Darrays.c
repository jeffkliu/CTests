#include <stdio.h>

int main(){
	int x[4][3];
	int i, j;

	for(i = 0; i<4;i++){
		for(j = 0; j<3;j++){
			x[i][j] = i * j;
			printf("%4d", x[i][j]);
		}
		printf("\n");
	}

	return 0;
}