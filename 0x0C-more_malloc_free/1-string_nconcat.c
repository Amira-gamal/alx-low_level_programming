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
	unsigned int i = 0, x = 0, y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0)
		i++;
	while (s2[x] != '\0')
		x++;
	if (n > x)
		n = x;
	y = i + n;
	ptr = malloc(y + 1);
	if (ptr == NULL)
		return (NULL);

	for (z = 0; z < y; z++)
		if (z < i)
			ptr[z] = s1[z];
		else
			ptr[z] = s2[z - i];

	ptr[z] = '\0';

	return (ptr);
}
