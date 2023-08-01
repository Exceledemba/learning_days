//ternary operators

#include <stdio.h>

int main()

{
	int age;

	printf("Enter your age:\n");
	scanf("%d", &age);

	(age >= 18) ? printf("You can vote\n") : printf("You cannot vote\n");

	return 0;

}


