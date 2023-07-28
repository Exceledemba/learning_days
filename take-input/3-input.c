/*scanf function
 *multiple input
 */
#include <stdio.h>

int main()
{

	double number;
	char alphabet;

	printf("\nEnterinput values: ");
	scanf("%lf %c", &number, &alphabet);

	printf("\nNumber: %.2lf ", number);
	printf("\nCharacter: %c ", alphabet);

	printf("\n");
	return 0;
}
