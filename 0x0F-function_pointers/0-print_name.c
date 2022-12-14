#include <stdio.h>

/**
 * print_name - a function that prints a name
 *@name: given name
 * @f: function of name
 *
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
