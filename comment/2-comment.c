/* comment in debugging*/

#include <stdio.h>

int main()
{
	int age;
	double height;

	printf("\nEnter your data: ");
	
	scanf("%d %lf", &age, &height);

	printf("Age=%d ", age);

	//printf("\nheight=%.3lf", height);

	printf("\n");

	return 0;
}
