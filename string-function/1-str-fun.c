//string functio ~ strcpy
//used to copy one string to another

#include <stdio.h>
#include <string.h>

int main()

{

	char food[] = "Akara";
	char bestFood[strlen(food)];
	strcpy (bestFood, food);

	printf("BestFood= %s\n", bestFood);

	return 0;
}
