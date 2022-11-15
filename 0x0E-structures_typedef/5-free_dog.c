#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs
 * @d: pointer to free dog
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
