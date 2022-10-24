#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints one character of two out of a string
 * @str: the main characters
 * Return: 0
 */
void puts2(char *str)
{
	int t = 0;

	while (str[t] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[t]);
		}
		t++;
	}

	putchar('\n');
}
