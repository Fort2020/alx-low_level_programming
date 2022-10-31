#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: the number of bytes to be filled
 * @s: a pointer to the memory area to be filled
 * @b: the charcter to fill the memory area with
 *
 * Return: a pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;
	char *memory = s, value = b;

	for (i = 0; i < n; i++)
		memory[i] = value;

	return (memory);
}
