#include "main.h"

/**
 * *_calloc - function to allocates memory
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: return pointer to array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			x[i] = 0;
		}
		return (x);
	}
	else
		return (NULL);
}
