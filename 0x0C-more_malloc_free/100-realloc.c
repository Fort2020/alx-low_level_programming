#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory allocated earlier
 * @old_size: the size in bytes, of the allocated space for ptr
 * @new_size: the new size in bytes of the memory block
 *
 * Return: pointer allocate new size of memory, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *i;
	unsigned int s, t = new_size;
	char *oldi = ptr;

	if (ptr == NULL)
	{
		i = malloc(new_size);
		return (i);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == 0)
		return (ptr);
	i = malloc(new_size);
	if (i == NULL)
		return (NULL);
	if (new_size > old_size)
		t = old_size;
	for (s = 0; s < t; s++)
		i[s] = oldi[s];
	free(ptr);
	return (i);
}
