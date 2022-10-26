#include "main.h"

/**
 * reverse_array - a funtion that reverses the content
 * of an array of integers
 * @a: array of integers to be reversed
 * @n: number of elements of the array
 *
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int s, t;

	for (s = 0; s < n; s++)
	{
		n--;
		t = a[s];
		a[s] = a[n];
		a[n] = s;
	}
}
