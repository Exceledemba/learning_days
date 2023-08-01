//if_else statement
//decision making
//voters eligibility

#include <stdio.h>

int main()

{
	int age;

	printf("input your age: \n");
	scanf("%d", &age);

	if(age >= 18)
		{
			printf("valid eligiblity \n");
		}

	else
		{
			printf("invalid eligibility \n");
		}

	return 0;
}
