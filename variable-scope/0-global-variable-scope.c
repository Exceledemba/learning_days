//local variable scope


#include <stdio.h>

int result;// global variable

int addNumbers(int num1, int num2)
{

	result = num1 + num2;
	printf("Result= %d\n", result);
}

int main()

{

	addNumbers(12, 12);

	return 0;
}
