//ternary operators
//task

#include <stdio.h>

int main()

{

	int number;
	printf("Enter a number:");
	scanf("%d", &number);

	(number % 2 == 0) ? printf("the number is even\n") : printf("the number is odd\n");

	return 0;

}


