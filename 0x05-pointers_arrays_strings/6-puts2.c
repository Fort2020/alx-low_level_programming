#include "main.h"
#include <stdio.h>

/**
 * puts2 - this function print only even numbers 
 * @str: main character
 * Return: always 0
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != 0)
	{
		if ((str[a] % 2) == 0)
		if ((a % 2) == 0)
			putchar(str[a]);
		a++;
	}
	putchar('\n');
}
