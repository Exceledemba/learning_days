/* type conversion*/
// conversing for example double to int for arithmetic purpose, the compiler uses ASCII value
#include <stdio.h>

int main()

{
	double a = 5.67;
	int b = 9;
	double result = a + b;
	printf("Result= %lf\n", result);
       return 0;
}       
