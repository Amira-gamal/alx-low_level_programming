#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: a pointer to the structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int x, y, m;
	dog_t *popy;

	popy = malloc(sizeof(dog_t));

	if (popy == NULL)
	{
		free(popy);
		return (NULL);
	}
	while (name[x])
		x++;
	while (owner[y])
		y++;
	popy->name = malloc(x + 1);
	popy->owner = malloc(y + 1);

	if (popy->name == NULL || popy->owner == NULL)
	{
		free(popy->name), free(popy->owner), free(popy);
		return (NULL);
	}
	for (m = 0; m < x; m++)
	{
		popy->name[m] = name[m];
	}
	p->name[m] = '\0';
	for (m = 0; m < y; m++)
	{
		popy->owner[m] = owner[m];
	}
	popy->owner[m] = '\0';
	popy->age = age;
	return (popy);
}
