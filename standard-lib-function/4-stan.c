//task

#include <stdio.h>
#include <math.h>

int main()

{

	double num;
	printf("Enter your numbers: ");
	scanf("%lf", &num);

	double square = sqrt (num);
	double power = pow (num, square);
	
	printf("Result= %lf\n", power);

	return 0;
}	
