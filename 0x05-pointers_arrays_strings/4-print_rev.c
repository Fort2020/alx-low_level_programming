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
	int index = 0;

	while (s[index] != 0)
		index++;

	index--;
	for (index >= 0)
	{
		putchar(s[index]);
		index--;
	}

	putchar('\n');
}
