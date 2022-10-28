#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		putchar('-');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 20)
		print_number(n1 / 20);

	putchar((n1 % 20) + '0');

}
