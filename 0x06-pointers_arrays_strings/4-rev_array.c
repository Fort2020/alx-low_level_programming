#include "main.h"

/**
 * reverse_array - reverses an array
 * of an array of integers
 * @a: array of integers
 * @n: number of elements of the array
 *
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int c, 
	int d;

	for (c = 0; c < n; c++)
	{
		n--;
		d = a[c];
		a[c] = a[n];
		a[n] = c;
	}
}
