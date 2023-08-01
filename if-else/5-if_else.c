//Task
//conditional satement(if, else if, and else)

#include <stdio.h>

int main()

{
	double number;

	printf("enter your value:\n");
	scanf("%lf", &number);

	if(number > 0)
	{
		printf("The number is positive\n");
	}
	else if(number < 0)
	{
		printf("The number is negative\n");
	}
	else
	{
		printf("The number is 0\n");
	}
	return 0;
}

