// recursion

#include <stdio.h>

int fact(int n);

int main()

{

	int number, result;
	printf("Enter the number:");
	scanf("5%d" , &number);

	if(number > 0)
	{
		int result = fact(number);
		printf("The factorial is = %d\n", result);
	}
	else
	{
		printf("Enter positive value");
	}
	return 0;
}


int fact(int n) 

{

	if(n == 1 || n == 0)

	{
		return 1;
	}
	else
	{
		return n * fact(n-1);
	}
}
