// c-arrays
// loop and arrays
// task
#include <stdio.h>

int main()

{
	int i;

	double mark[5];

	printf("Enter mark: ");

	for(i = 0; i < 5; i++)
	{
		scanf("%lf", &mark[i]);
	}
	double sum = 0;
	for(i = 0; i < 5; ++i)
	{
		sum = mark[i] + sum;
	}
	double avgMark = sum/5;

	printf("The average marks of a student: %lf\n", avgMark);

	return 0;

}
