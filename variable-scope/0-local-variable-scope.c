//local variable scope


#include <stdio.h>

int addNumbers(int num1, int num2)
{

	int result = num1 + num2;
	return result; // without the return result the int result is local to the declared funtion
}

int main()

{

	int sum = addNumbers(12, 12);
	printf("Sum= %d\n", sum);

	return 0;
}
