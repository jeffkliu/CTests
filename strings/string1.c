#include <stdio.h>
#include <string.h>

int main(){
	char str[] = "Hello Booboo";

	strcpy(str, "Bummer");

	char str1[] = "Daymz";

	strcpy(str, str1);

	printf("Message is: %s\n", str);

	char test[100];

	scanf("%[^\n]", test);
	printf("This is it %s\n", strcat(test, str));

	printf("Are they equal? %d\n", strcmp(str, test));

	int i = strlen(test);
	printf("Length of previous text: %d\n", i);

	return 0;
}