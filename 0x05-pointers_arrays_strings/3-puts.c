#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * followed by a new line
 * @str: string to be printed
 */
void _puts(char *str)
{
	int str

	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
