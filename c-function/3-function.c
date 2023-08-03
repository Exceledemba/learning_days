// c-function

#include <stdio.h>

void addNumber(int number1, int number2)

{
	int sum = number1 + number2;
	printf("Sum of %d and %d is %d\n", number1, number2, sum);
}

int main()

{

	addNumber(23, 23);
	return 0;
}
