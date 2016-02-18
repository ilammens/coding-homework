//Isabel Lammens
//Coding - Exercise 2 - 17/02/2016

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int array[10], a, min;

	printf("Input 10 integers: ");

	for (a = 0; a < 10; a++)
	{
		scanf_s("%i", &array[a]);
	}

	min = array[0];

	for (a = 0; a < 10; a++)
	{
		if (array[a] < min)
		{
			min = array[a];
		}
	}

	printf("Min is %i\n", min);

	system("pause");
	return 0;
}
