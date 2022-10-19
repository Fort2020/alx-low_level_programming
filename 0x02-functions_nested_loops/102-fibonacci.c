#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 * separated by comma and with space.
 * Return: always 0
 */
int main(void)
{
	int count;
	long int num1 = 0, num2 = 1, next;

	for (count = 0; count < 50; count++)
	{
		next = num1 + num2;
		printf("%ld", next);

		num1 = num2;
		num2 = next;

		if (count == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
