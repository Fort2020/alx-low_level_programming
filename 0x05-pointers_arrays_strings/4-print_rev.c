#include "main.h"
#include <stdio>

/**
 * print_rev - print a string in reverse, followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, t, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++
	}

	len = i;

	for (t = len - i; t >= 0; t--)
	{
		_putchar(s[t]);
	}

	_putchar('\n');
}
