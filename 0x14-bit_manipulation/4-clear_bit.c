#include "main.h"

/**
 * clear_bit - function that sets the value of bit
 * to 0 at a given index.
 * @n: pointer of an unsigned int
 * @index: index of the bit
 *
 * Return: 1 if it worked or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 63)
		return (-1);

	b = 1 << index;

	if (*n & b)
		*n ^= b;

	return (1);
}
