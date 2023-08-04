pointers allow us to work directly with computer memory address
to access the memorry address we use &varName.
a pointer is a variable that stores memory address of a variable not the actual value


int number; = value of the variable

int* ptr; = memory address

&number; = memory address

therfore

ptr = number // wrong; ptr is a memory address while number is a name of variable

*ptr = &number // wrong; *ptr gives the value stored in a memory address while &number is a memory address

ptr = &number // correct both are memory addresses

*ptr = number // correct; both represent value stored in memory location
