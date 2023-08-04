//string

#include <stdio.h>

int main()

{
	// string input
	
	char name[20];

	printf("Enter your name:");

	fgets(name, sizeof(name), stdin); //fgets does take white spaces

	name[0] = 'X';

	printf("%s\n", name);

	return 0;
}
