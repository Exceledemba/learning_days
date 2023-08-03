/* c-function
 * returnType functionName()
*  {
*  	.....b
*  	.....a
*  }
*  returnType indicate the datatype of the value that is returned by the functionName.
*  functionName is the name of the function.
*  a and b are statements inside the funtion
*/


#include <stdio.h>

void greet()

{

	printf("Good morning!\n");
}

int main()

{
	greet();

	printf("After function call\n");

return 0;
}
