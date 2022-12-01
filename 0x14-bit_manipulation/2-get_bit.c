#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * at a given index
 * @n: unsigned long int
 * @index: index of a bit
 *
 * Return: the value of the bit at index
 * or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int s;

	if (n == 0 && index > 64)
		return (0);

	for (s = 0; s <= 63; n >>= 1, s++)
	{
		if (index == s)
		{
			return (n & 1);
		}
	}
	return (-1);
}
