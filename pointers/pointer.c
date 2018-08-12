#include <stdio.h>

int main(){

	int *p;
	float *f;
	double *d;
	char *k;

	printf("%lu %lu %lu %lu\n", sizeof(p), sizeof(f), sizeof(d), sizeof(k));
	printf("%lu %lu %lu %lu\n", sizeof(*p), sizeof(*f), sizeof(*d), sizeof(*k));

	int x = 10;
	int *y;
	y = &x;
	*y = 123;

	printf("The address of x is: %p\n", y);
	printf("The address of x++ is: %p\n", y + 1);
	printf("The value of x after pointer changed: %d\n", *y);

	double *a = (double *)10000;
	double *b = (double *)2000;

	printf("%d/n", p-q);

	return 0;
}