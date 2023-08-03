// c-function task

#include <stdio.h>

int multNumbers(int number1, int number2)
{
	int product = number1 * number2;
	return product;
}

int main()
	
{
	int result = multNumbers(5, 5);
	printf("Result = %d\n", result);

	return 0;
}
