#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer that contains the address of the beginning of the matrix
 * @size: size of the square matrix
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int s, t;
	int n1 = 0, n2 = 0;

	for (s = 0; s < size * size; s = s + (size + 1))
	{
		n1 = n1 + a[s];
	}
	for (t = size - 1; t < size * size - 1; t = t + (size - 1))
	{
		n2 = n2 + a[t];
	}
	printf("%d, %d\n", n1, n2);
}
