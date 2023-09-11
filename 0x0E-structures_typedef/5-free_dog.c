#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to free space
 * @d: pointer to dog type
 * Return: Always success
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
