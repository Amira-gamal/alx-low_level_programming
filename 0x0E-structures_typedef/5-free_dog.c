#include "dog.h"

/**
 * free_dog - function to free space
 * @d: pointer to dog type
 * Return: Always success
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
