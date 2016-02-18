//Isabel Lammens
//Coding - Exercise 1 - 17/02/2016

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c = 0, count = 0;

	printf("Input first number: ");
	scanf_s("%i", &a);
	printf("Input second number: ");
	scanf_s("%i", &b);

		while (count < b)
		{
			c = a + c;
			count++;
		}

		printf("The product of the two numbers is: %i\n", c);
	
	system("pause");
	return 0;
}
