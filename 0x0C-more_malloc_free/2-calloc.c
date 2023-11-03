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

	void *ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	unsigned char *byte_ptr = (unsigned char *)ptr;

	for (i = 0; i < (nmemb * size); i++)
		byte_ptr[i] = 0;
	return (ptr);
}
