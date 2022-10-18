#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * greater, equal or less than zero.
 * @n: the input number as an integar.
 * Return 1 if greater than zero. 0 is zero.
 * -1 is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(13);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(13);
		return (-1);
	}
	else
	{
		_putchar(18);
		return (0);
	}
	_putchar('\n');
}
