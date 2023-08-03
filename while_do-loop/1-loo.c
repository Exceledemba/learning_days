// while loop
// multiplication table using while loop

#include <stdio.h>

int main()

{

	double number;
	printf("Enter the number:");
	scanf("%lf", &number);

	double count = 1.0;

	while(count <= 12)
	{
		double product = number * count;
		printf("%.2lf*%.2lf = %.2lf\n", number, count, product);
		count = count + 1;
		
	}

	return 0;
}
