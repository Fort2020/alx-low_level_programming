#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @nb: the number last digit is the result.
 * Return: value of the last digit.
 */
int print_last_digit(int nb)
{
	int last_digit = nb % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');
	return (last_digit);
}
