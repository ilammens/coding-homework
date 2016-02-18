//Isabel Lammens
//Coding - Exercise 3 - 17/02/2016

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, op;

	printf("Input number: ");
	scanf_s("%i", &a);

	do
	{
		printf("Choose operation: increment (1), decrement (2), power of two (3), quit (4).\n");
		scanf_s("%i", &op);

		switch (op)
		{
		case 1:
			a++;
			printf("Increment: %i\n\n", a);
			break;

		case 2:
			a--;
			printf("Decrement: %i\n\n", a);
			break;

		case 3:
			b = a*a;
			printf("Power of two: %i\n\n", b);
			break;
		}

	} while (op != 4);

	system("pause");
	return 0;
}
