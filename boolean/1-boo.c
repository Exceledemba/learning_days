// boolean - comparison and logical operators
// used to create boolean expression which return boolean values
/**
 * A) COMPARISON OPERATORS
 * 1) > greater than
 * 2) < less than
 * 3) == equal to
 * 4) >= greater than or equal to
 * 5) <= less than or equal to
 * 6) != not equal to
 */
// comparison of two or more values

#include <stdio.h>
#include <stdbool.h>

int main()

{
	bool value = (12 > 12); // true = 0
	bool value1 = (5 > 6); // false = 0
	bool value2 = (5 < 6); // true = 1
	bool value3 = (6 < 6); // false = 0
	bool value4 = (6 == 6); // true = 1
	bool value5 = (5 == 6); // false = 0
	bool value6 = (6 != 6); // false = 0
	bool value7 = !(6 != 6); // true = 1
	bool value8 = (5 != 6); // true = 1
	bool value9 = !(5 != 6); // false = 0
	bool value10 = (9 >= 10); // false = 0
	bool value11 = (10 >= 9); // true = 1
	bool value12 = (9 <= 10); // true = 1
	bool value13 = (10 <= 9); // false = 0
	bool value14 = (10.34 <= 9.56); //false = 0
	bool value15 = !(10.34 <= 9.56); // true = 1

	printf("value= %d\n", value);
	printf("value1= %d\n", value1);
	printf("value2= %d\n", value2);
	printf("value3= %d\n", value3);
	printf("value4= %d\n", value4);
	printf("value5= %d\n", value5);
	printf("6value= %d\n", value6);
	printf("value7= %d\n", value7);
	printf("value8= %d\n", value8);
	printf("value9= %d\n", value9);
	printf("value10= %d\n", value10);
	printf("value11= %d\n", value11);
	printf("value12= %d\n", value12);
	printf("value13= %d\n", value13);
	printf("value14= %d\n", value14);
	printf("value15= %d\n", value15);
	return 0;
}
