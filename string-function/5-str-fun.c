//task

#include <stdio.h>
#include <string.h>

int main()
{
	char food1[30];
	char food2[30];

	printf("Enter the first food: ");
	fgets(food1, sizeof(food1), stdin);

	printf("Enter the second food: ");
	fgets(food2, sizeof(food2), stdin);

	if(strlen(food1) > strlen(food2))
	{

		printf("The longest food name: %s\n", food1);
	}
	else
	{
		printf("The longest food name: %s\n", food2);
	}

	return 0;
}
