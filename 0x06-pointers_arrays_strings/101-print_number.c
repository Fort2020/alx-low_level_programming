#include "main.h"
#include <stdio.h>

/**
 * print_number - prints number putchar
 * @n: integer
 * Return: 0
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
		print_number(x / 10);

	_putchar((x % 10) + '0');

	return (0);
}
