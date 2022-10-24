#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints one character of two out of a string
 * @str: the main characters
 */
void puts2(char *str)
{
	while (*str)
	{
		putchar(*str);
		str += 2;
	}

	putchar('\n');
}
