#include "main.h"

/**
 * *malloc_checked - allocate memory with malloc
 * @b: unsigned int type
 * Return: return pointer
*/

void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (x == NULL)
		exit(98);
	return (x);
}
