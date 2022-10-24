#include "main.h"
#include <stdio.h>

/**
 * puts2 - print charcter of a string
 * @str: start with first character
 *
 * Return: 0 (Success)
 */
void puts2(char *str)
{
	int index = 0;

	while (str[index] != 0)
	{
		if ((str[index] % 2) == 0)
			if ((index % 2) == 0)
				putchar(str[index]);
		index++;
	}
	putchar('\n');
}
