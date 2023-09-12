#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen y, olen x, i;
	dog_t *poppy;

	for (y = 0; name[y]; y++)
		;
	for (x = 0; owner[x]; x++)
		;
	poppy = malloc(sizeof(dog_t));
	if (poppy == NULL)
		return (NULL);

	poppy->name = malloc(y * sizeof(poppy->name));
	if (poppy == NULL)
		return (NULL);
	for (i = 0; i < y; i++)
		poppy->name[i] = name[i];

	poppy->age = age;

	poppy->owner = malloc(x * sizeof(poppy->owner));
	if (poppy == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
		poppy->owner[i] = owner[i];
	return (poppy);
}
