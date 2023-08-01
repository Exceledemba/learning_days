//else if statement(step ladder| decision from more than 2 options
//decision making
//voters eligibility
//with logical operator

#include <stdio.h>

int main()

{
	int age;

	printf("input your age: \n");
	scanf("%d", &age);

	if(age > 120 || age < 0)
		{
			printf("unlikely \n");
		}

	//else if(age < 0)
	//	{
	//		printf("impossible \n");
	//	}
	else if(age >= 18)
		{
			printf("valid \n");
		}
	else
		{
			printf("invalid \n");
		}

	return 0;
}
