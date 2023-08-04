Recursion is the process that allows us create a function that calls itself.

The c recursive function is the function that calls itself.

void recurse()

{

	.....
	recurse();
	.....
}

int main()

{

	.....
	recurse();
	.....

	return 0;
}
the above code will result in infinite recursive call, to prevent this we introduce if else statement where recursive call is made under certain conditions

void recurse()

{

	if(condition)
	{
	//body
	}

	else
	{

	recurse
	
	}
}

int main()

{
	recurse;
	return 0;
}

