#include "dog.h"

/**
 * new_dog - creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer to newly created dog structure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen y = 0, olen x = 0, i;
	dog_t *bobby;

	for (y = 0; name[y] != '\0'; y++)
		;
	for (x = 0; owner[x] != '\0'; x++)
		;
	bobby = malloc(sizeof(dog_t));
	if (bobby == NULL)
		return (NULL);
	bobby->name = malloc(y * sizeof(bobby->name));
	if (bobby == NULL)
		return (NULL);
	for (i = 0; i < y; i++)
		bobby->name[i] = name[i];
	bobby->age = age;
	bobby->owner = malloc(olen * sizeof(bobby->owner));
	if (bobby == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
		bobby->owner[i] = owner[i];
	return (bobby);
}
