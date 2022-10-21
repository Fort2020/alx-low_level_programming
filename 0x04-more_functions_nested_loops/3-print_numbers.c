#include "main.h"

/**
 * print_numbers - function that prints the numbers 0-9
 *
 * Return: void
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
