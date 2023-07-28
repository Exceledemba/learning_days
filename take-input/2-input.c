/*scanf function
 * double input
 */
#include <stdio.h>

int main()
{

	double number;
	char alphabet;

	printf("\nEnter double input: ");
	scanf("%lf", &number);

	printf("\nEnter character input: ");
	scanf("%c", &alphabet);
	
	printf("\nNumber: %.2lf ", number);
	printf("\nCharacter: %c ", alphabet);
	
	printf("\n");
	return 0;
}
