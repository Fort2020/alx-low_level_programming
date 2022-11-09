#include "main.h"

/**
 * _strncat - funtion that concatenates two strings
 * by putting number of bytes from src
 * @dest: append the string
 * @src: the string to append to dest
 * @n: the number of bytes from src to be appended to dest
 *
 * Return: the pointer to the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0,  dest_l = 0;

	while (dest[i++])
		dest_l++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_l++] = src[i];

	return (dest);
}
