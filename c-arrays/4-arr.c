// c-arrays
// loop and arrays
#include <stdio.h>

int main()

{

	int age[5];

	printf("Enter vslues: ");

	for(int i = 0; i < 5; ++i)
	{
		scanf("%d", &age[i]);
	}
	for(int i = 0; i < 5; ++i)
	{
		printf("%d \n", age[i]);
	}

	return 0;

}
