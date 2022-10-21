#include <stdio.h>

/**
 * main - prints the numbers from 1-100, followed by a new line.
 * print Fizz for multiple of three instead of the number,
 * and for the multiples of five print Buzz.
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int na;

	for (na = 1; na <= 100; na++)
	{
		if ((na % 3) == 0 && (na % 5) == 0)
			printf("FizzBuzz");

		else if ((na % 3) == 0)
			printf("Fizz");

		else if ((na % 5) == 0)
			printf("Buzz");

		else
			printf("%d", na);

		if (na == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
