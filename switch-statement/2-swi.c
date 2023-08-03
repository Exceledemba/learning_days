// Switch statement

#include <stdio.h>

int main()

{
	char operator;

	printf("Choose your operator, '+', '-', '*', '/':");
	scanf("%c", &operator);
	
	double num1, num2;

	printf("Enter first number:");
	scanf("%lf", &num1);

	printf("Enter second number:");
	scanf("%lf", &num2);

	double result;
	//if(num1 >= num2)
	//{
	switch(operator)
	{
		case '+':
			result = num1 + num2;
		break;

		case '-':
			result = num1 - num2;
		break;

		case '*':
			result = num1 * num2;
		break;

		case '/':
			result = num1 / num2;
		break;

		default:
			printf("Invalid Operator\n");
	}
	//}
	/*else
	{
	switch(operator)
	{
		case '+':
		result = num2 + num1;
		break;

		case '-':
		result = num2 - num1;
		break;

		case '*':
		result = num2 * num1;
		break;

		case '/':
		result = num2 / num1;
		break;

		default:
			printf("Invalid Operator\n");
	}
	}*/
	printf("Result=%.2lf\n", result);
	return 0;
}
