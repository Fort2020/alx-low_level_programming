#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of a and b integers.
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
