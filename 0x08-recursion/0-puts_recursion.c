#include "main.h"

/**
 * _puts_recursion - prints a string followed ny a new line
 * @s: input
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == 0)

	{
		_putchar(10);
	}
	else
	}
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
