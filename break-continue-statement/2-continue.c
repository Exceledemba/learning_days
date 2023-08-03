// usage of break and continue statement

#include <stdio.h>

int main()

{

	while(1)
	{
		int number;
		printf("Enter any number:");
		scanf("%d", &number);

		if(number < 0 && number % 2 != 0)
		{

			printf("Negative odd = %d\n", number);
		}
		
		else if(number > 1 && number % 2 == 0)
		{

			printf("Positve even\n");
			break;
		}
		else if(number >= 0 && number % 2 != 0)
		{

			printf("Positve odd\n");
			break;
		}

		else if(number == 0)
		{
			printf("The number is 0\n");
			break;
		}
		else
		{
			printf("Negative even\n");
			continue;
		}
	}
	return 0;
}
