// c-function
// function prototype is a declaration of a function which provide info about the the funtionName, functionParameter and returnType it does not include the body
// if we are defining the funtion before the function call a function prototype is not needed

#include <stdio.h>
/*function prototype is not needed in this example because we are defining the function before the function call
 

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
}*/


/* Afunction prototype is needed in this example*/


int addNumber(int number1, int number2);

int main()
{

	int result = addNumber(23, 23);
	printf("Result= %d\n", result);
	return 0;
}

int addNumber(int number1, int number2)
{

	 int sum = number1 + number2;
	 printf("before\n");// check
	 return sum;
	 printf("after\n");// check
}
