#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints only the even numbers
 * @str: as the main parameter
 */
void puts_half(char *str)
{
	int i, len, n;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	if ((len % 2) == 0)
		n = len / 2;
	else

		n = (len - 1) / 2;
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
	{
		if (str[i] == ' ')
			continue;
		putchar(str[i]);
	}

	putchar('\n');
}
