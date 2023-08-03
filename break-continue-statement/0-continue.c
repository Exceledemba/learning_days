// continue statement jump a particular condition to the next

#include <stdio.h>

int main()

{

	int i;

	for(i = 0; i < 10; i++)

	{

		if(i == 5 && 5 && 5 && 5 && 5 && 6)

		{
			continue;
		}

		printf("%d\n", i);

	}

	return 0;
}
