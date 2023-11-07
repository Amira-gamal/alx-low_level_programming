#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - ...
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: ...
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, name_length = 0, owner_length = 0;
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	while (name[name_length] != '\0')
		name_length++;
	while (owner[owner_length] != '\0')
		owner_length++;

	if (newDog == NULL)
		return (NULL);
	newDog->name = (char *)malloc(name_length + 1);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; i <= name_length; i++)
		newDog->name[i] = name[i];
	newDog->age = age;
	newDog->owner = (char *)malloc(owner_length + 1);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i <= owner_length; i++)
		newDog->owner[i] = owner[i];
	return (newDog);
}
