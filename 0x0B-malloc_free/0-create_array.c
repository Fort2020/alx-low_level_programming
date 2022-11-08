#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initalizes it with a specific char
 * @size: the size of the array
 * @c: initial value
 *
 * Return: a point to the array, or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
