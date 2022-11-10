#include "main.h"

/**
 * _strncpy - a function that copies a string
 * of bytes from src to dest
 * @dest: storing the string copy
 * @src: the string source
 * @n: number ot bytes copied from src
 *
 * Return: the pointer to the string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_l = 0;

	while (src[i++])
		src_l++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_l; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
