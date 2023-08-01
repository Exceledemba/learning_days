//ternary operators

#include <stdio.h>

int main()

{
	char operator = '+';

	int num1 = 8;
	int num2 =7;

	int result = (operator == '+') ? (num1 + num2) : (num1 - num2);

	printf("%d\n", result);

	return 0;

}


