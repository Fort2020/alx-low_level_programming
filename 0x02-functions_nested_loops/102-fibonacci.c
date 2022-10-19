#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 * separated by comma and with space.
 * Return: always 0
 */
int main(void)
{
	int sum;
	long int num1 = 0, num2 = 1, next;

	for (sum = 0; sum < 50; sum++)
	{
		next = num1 + num2;
		printf("%ld", next);

		num1 = num2;
		num2 = next;

		if (sum == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
