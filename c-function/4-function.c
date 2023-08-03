// c-function
// return value

#include <stdio.h>

int addNumber(int number1, int number2)

{
	int sum = number1 + number2;
	printf("before\n");
	return sum;
	printf("after\n");
}

int main()

{

	int result = addNumber(23, 23);
	printf("Result= %d\n", result);
	return 0;
}
