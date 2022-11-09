#include "main.h"

/**
 * _strcat - function that concatrnates two strings
 * depends the dest and src
 * @dest: a pointer to the string
 * @src: the source to be appended to dest
 *
 * Return: the pointer to the dest string
 */
char *_strcat(char *dest, char *src)
{

	int i = 0, dest_l = 0;

	while (dest[i++])
		dest_l++;

	for (i = 0; src[i]; i++)
		dest[dest_l++] = src[i];

	return (dest);
}
