// string function~ strcmp (string comparison function)
// used to join join compare two strings, return 0 if equal otherwise random non zero number

#include <stdio.h>
#include <string.h>

int main()

{

	char text1[] = "abcd";

	char text2[] = "dcba?";

	int result = strcmp(text1, text2); // assigned int result because it returns integer value

	printf("%d\n", result);

	return 0;
}
