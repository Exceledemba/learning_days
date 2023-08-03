// Switch statement
// switch statement in multiple case

#include <stdio.h>

int main()

{
	int number;

	printf("Enter number between 1 to 7:");
	scanf("%d", &number);
	
	switch(number)
	{

		case 2:

		case 3:

		case 4:

		case 5:

		case 6:
			printf("Weekdays\n");
		break;

		case 1:

		case 7:
			printf("Weekends\n");
		break;

		default:
			printf("Invalid\n");
	}
	return 0;
}
