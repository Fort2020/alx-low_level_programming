#include <stdio.h>

/**
 * array_iteration - executes a function given as a parameter
 * on each element of an array
 * @array: array to execute function on
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: Always 0.
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
