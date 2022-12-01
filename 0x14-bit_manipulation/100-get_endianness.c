#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int b;
	char *s;

	b = 1;
	s = (char *) &s;

	return ((int)*s);
}
