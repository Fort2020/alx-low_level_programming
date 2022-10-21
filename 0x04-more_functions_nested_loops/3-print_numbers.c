#include "main.h"

/**
 * print_numbers - function that prints the numbers 0-9
 *
 * Return: 0-9 followed by new line
 */
void print_numbers(void)
{
int n;

for (n = 48; n < 58; n++)
{
_putchar(n);
}
_putchar(10);
}
