#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - ...
 * @s1: ...
 * @s2: ...
 * @n: ...
 *
 * Return: ...
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, x = 0, z = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[x])
		x;

	if (s2 == NULL)
		s2 = "";

	while (s2[z])
		z++;

	if (n >= z)
		n = z;
	ptr = malloc(x + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (x + n); i++)
	{
		if (i < x)
			ptr[i] = *s1, s1++;
		else
			ptr[i] = *s2, s2++;
	}
	ptr[i] = '\0';
	return (ptr);
}
