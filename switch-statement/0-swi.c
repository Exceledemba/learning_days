// Switch statement

#include <stdio.h>

int main()

{
	int number;

	printf("Enter number between 1 to 7:");
	scanf("%d", &number);
	
	switch(number)
	{
		case 1:
			printf("Sunday\n");
		break;

		case 2:
			printf("Monday\n");
		break;

		case 3:
			printf("Tuesday\n");
		break;

		case 4:
			printf("Wednesday\n");
		break;

		case 5:
			printf("Thursday\n");
		break;

		case 6:
			printf("Friday\n");
		break;

		case 7:
			printf("Saturday\n");
		break;

		default:
			printf("Invalid\n");
	}
	return 0;
}
