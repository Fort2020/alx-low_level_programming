#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string,
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *copy;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	copy = (char *)malloc((sizeof(char) + length) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		copy[i] = str[i];
	copy[length] = '\0';

	return (copy);
}
