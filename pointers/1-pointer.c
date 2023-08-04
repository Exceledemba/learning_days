// pointer

#include <stdio.h>

int main()
{

	//int* ptr; // pointer variable
	//int var; // regular variable
	
	int age = 25;

	printf("%p\n", &age);

	int* ptr = &age;

	printf("%p\n", ptr);
	return 0;
}
