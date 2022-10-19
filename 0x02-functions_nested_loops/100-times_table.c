#include "main.h"

/**
 * print_times_table - Prints a multiplication table.
 * @n: the number to be treated.
 *
 * Return: number matrix
 */
void print_times_table(int n)
{
	int a, b, st;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');

			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');

				st = a * b;

				if (st <= 99)
					_putchar(' ');
				if (st <= 9)
					_putchar(' ');

				if (st >= 100)
				{
					_putchar((st / 100) + '0');
					_putchar(((st / 10)) % 10 + '0');
				}
				else if (st <= 99 && st >= 10)
				{
					_putchar((st / 10) + '0');
				}
				_putchar((st % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
