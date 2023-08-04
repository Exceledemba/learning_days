// dimensional array

#include <stdio.h>

int main()

{

	int arr[2][3] = {{ 1, 3, 5}, {2, 4, 6}};

	// how to access it
	
	arr[0][0]; // = 1
	arr[1][2]; // = 6

	printf("%d\n", arr[0][0]);
	printf("%d\n", arr[1][2]);

	return 0;
}
