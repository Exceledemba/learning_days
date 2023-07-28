/*scanf function
 *  * float int input from user in multiple format
 *   */
#include <stdio.h>

int main()
{

	float number;
	int number1;

	printf("\nEnter float and int input: ");
	scanf("%f %d", &number, &number1);

	printf("\nfloatNumber: %.2f ", number);
	printf("\nintNumber: %d ", number1);

	printf("\n");
	return 0;
}
