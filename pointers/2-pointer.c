// pointer variables
//accessing value of variable using pointer

#include <stdio.h>


int main()

{

	int age = 25;
	int* ptr = &age;
	printf("address: %p\n", ptr);

	printf("value: %d\n", *ptr);
	return 0;
}
