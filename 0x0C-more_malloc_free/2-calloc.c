#include "main.h"
#include <stdlib.h>

/**
 * _calloc - ...
 * @nmemb: number of members
 * @size: size
 *
 * Return: ...
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	char *ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
