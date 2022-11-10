#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by a new line.
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{

	while (*str)
		putchar(*str++);

	putchar('\n');
}
