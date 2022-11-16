#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array to execute function on
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	if (array && action)
	{
		s = 0;
		while (s < size)
		{
			action(array[s]);
			s++;
		}
	}
}
