C-Arrays

It is the collection of similar type of data.
It uses to store multiple of similar type of data.

Syntax; 
datatype arrayName[arraySize] = {};

datatype specifies the type of data that would be stored in the array and must be of uniform datatype.
arrayName serves as the identifier.
arraySize specifies the number data that must be stored in the are and when it is not specified the number of data inputed is automatically assigned to the arraySize.

Example;
int age[5] = {1, 2, 3, 4, 5}; valid.
int age[] = {1, 2, 3, 4, 5}; valid.
int age[5] = {1, 2, 3}; valid.
int age[5] = {1, 2, 3, 4, 5,6}; invalid.

Array Index.
It specifies the position of arrayElement in a declared array.
it is used to assess the array element.

Therefore in the example below;
int age[5] = {1, 2, 3, 4, 5}; valid.
The array index of 1 is zero, 2 is 1, 3 is 2 and so on.
