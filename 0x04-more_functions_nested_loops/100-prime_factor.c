#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factor of the number 612852475143,
 * followed by a new line.
 *
 * Return: always (0) (Success)
 */
int main(void)
{
	unsigned long int a, n = 612852475143;

	for (a = 3; a < 514389; a = a + 2)
	{
		while ((n % a == 0) && (n != a))
			n = n / a;
	}
	printf("%d\n", n);
	return (0);
}
