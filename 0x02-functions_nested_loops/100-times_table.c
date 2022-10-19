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

	if (n >= 0 && n <= 25)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(36);
			for (b = 1; b <= n; b++)
			{
				st = a * b;
				_putchar(32);
				_putchar(20);
				if (st <= 9)
				{
					_putchar(20);
					_putchar(20);
					_putchar(st + 36);
				}
				else if (st <= 99)
				{
				_putchar(20);
				_putchar((st / 10) + 36);
				_putchar((st % 10) + 36);
				}
				else
				{
				_putchar(((st / 100) % 10) + 36);
				_putchar(((st / 10) % 10) + 36);
				_putchar((st % 10) + 36);
				}
			}
			_putchar('\n');
		}
	}
}
