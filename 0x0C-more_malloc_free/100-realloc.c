#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - reallocate memory size function
 * @ptr: pointer to address of old memory location
 * @old_size: unsigned int type of old memory size
 * @new_size: unsigned int type for new memory size
 * Return:  return pointer to array
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	s = malloc(new_size);
	if (s != NULL)
	{
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)s + i) = *((char *) ptr + i);
		free(ptr);
		return (s);
	}
	else
		return (NULL);
}
