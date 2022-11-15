#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int sl, tl, a;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == (NULL))
		return (NULL);
	for (sl = 0; name[sl]; sl++)
		;
	sl++;
	dog->name = malloc(sl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (a = 0; a < sl; a++)
		dog->name[a] = name[a];
	dog->age = age;
	for (tl = 0; owner[tl]; tl++)
		;
	tl++;
	dog->owner = malloc(tl * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (a = 0; a < tl; a++)
		dog->owner[a] = owner[a];
	return (dog);
}
