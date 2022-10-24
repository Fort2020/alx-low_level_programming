#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string in reverse, followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
