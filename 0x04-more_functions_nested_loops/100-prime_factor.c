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
	long int s, t = 612852475143;

	for (s = 3; s < 51439; s = s + 2)
	{
		while ((t % s == 0) && (t != s))
			t = t / s;
	}
	printf("%d\n", n);
	return (0);
}
