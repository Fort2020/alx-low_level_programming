#include "main.h"

/**
 * print_line - draws a stright line in the terminal
 * @n: number of times the charcter _ should be printed
 * Return: a straight line
 */
void print_line(int n)
{
	int st;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (st = 1; st <= n; st++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
