#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * using the number \ characters many times
 * @n: number of characters \ should be printed
 */
void print_diagonal(int n)
{
	int s, t;

	if (n <= 0)
		_putchar('\n');
	for (s = 0; s < n; s++)
	{
		for (t = 0; t < s; t++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
