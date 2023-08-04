//string

#include <stdio.h>

int main()

{
	// string input
	
	char str[20];

	printf("Enter your name:");

	fgets(str, sizeof(str), stdin); //fgets does take white spaces

	printf("%s\n", str);

	return 0;
}
