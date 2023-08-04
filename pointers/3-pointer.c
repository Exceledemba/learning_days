// pointer variable
// change value of variable using pointer variable

#include <stdio.h>

int main()

{

	int age = 25;

	int* ptr = &age;

	*ptr = 31;

	printf("%d\n", age);

	return 0;
}
