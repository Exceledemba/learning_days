// uses of break statement

#include <stdio.h>

int main()

{

	while (1)
	{

		int number;

		printf("Enter number: ");
		scanf("%d", &number);

		if(number <= 0)
		{
			break;
		}

		if((number % 2) != 0)
		{
		       continue;
		}

		printf("learning_days%c\n", number);

	}
	
	return 0;

}

