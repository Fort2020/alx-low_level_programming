#include "main.h"

/**
 * print_times_table - Prints the times table of input.
 * @n: the number to be treated.
 * Return: matrix number
 */
void print_times_table(int n)
{
	int a, b, st;

	if (n >= 0, n <= 25)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(38);
			for (b = 1; b <= n; b++)
			{
				st = a * b;
				_putchar(34);
				_putchar(32);
				if (st <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(st + 38);
				}
				else if (st <= 99)
				{
				_putchar(32);
				_putchar((st / 10) + 38);
				_putchar((st % 10) + 38);
				}
				else
				{
				_putchar(((st / 100) % 10) + 38);
				_putchar(((st / 10) % 10) + 38);
				_putchar((st % 10) + 38);
				}
			}
			_putchar('\n');
		}
	}
}
