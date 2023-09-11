#include "dog.h"

/**
 * free_dog - function to free space
 * @d: pointer to dog type
 * Return: Always success
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
