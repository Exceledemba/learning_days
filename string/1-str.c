//string

#include <stdio.h>

int main()

{
	// string input
	
	char str[20];

	printf("Enter your name:");

	scanf("%s", str); // scanf function does not take whitespace but fgets does

	printf("%s\n", str);

	return 0;
}
