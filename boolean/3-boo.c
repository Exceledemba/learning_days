// boolean - comparison and logical operators
// used to create boolean expression which return boolean values
/**
 * B) LOGICAL OPERATORS
 * 1) && AND
 * 2) || OR
 * 3) ! NOT
 */
// && AND, || OR, ! NOT

#include <stdio.h>
#include <stdbool.h>

/**int main()

{
	// for AND operator if one of the statement is false the whole value is false
	int age = 16;
	double height = 6.3;

	bool value = (age >= 18) && (height > 6.0;

	printf("boolVar= %d\n", value); // boolval= 0

	return 0;
}

int main()

{

	//for AND operator if all the statememt are true, the value is true.
	int age = 18;

	double height = 6.3;

	bool result = (age >= 18) && (height > 6.0);

	printf("boolVar= %d\n", result); // boolVal= 1

	return 0;

}

int main()

{
	// for OR either one of the boolean expression has to be true for statement to hold true 
	int age = 18;

	double height = 6.3;

	bool result = (age >= 18) || (height > 6.0);

	printf("boolVar= %d\n", result); // boolVal= 1

	return 0;
}*/


int main()

{
	// NOT operator uses one boolean expression unlike AND and OR and if the expression is true it return false and vice versa
	int age = 16;

	bool result = !(age >= 18);

	printf("boolVar= %d\n", result); // boolVal= 1

	return 0;
}
