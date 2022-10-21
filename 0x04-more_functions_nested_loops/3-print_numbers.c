#include "main.h"

/**
 * print_numbers - Print numbers from 0-9
 * Return: 0
 */

void print_numbers(void)
{
	char c = 0;

	for (c <= 9)
	{
		_putchar('0' + c);
		c++;

	}
	_putchar('\n');
}
