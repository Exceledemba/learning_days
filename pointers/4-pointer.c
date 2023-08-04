//task

#include <stdio.h>

int main()

{

	double salary;

	printf("Enter your salary: ");
	scanf("%lf", &salary);
	double* ptr = &salary;
	printf("your salary : %lf\n", *ptr);
	double newSalary = *ptr * 2;
	printf("your double salary : %lf\n", newSalary);
	return 0;
}
