#include <stdlib.h>
#include "main.h"

/**
 * _strdup- copy a string.
 * @str: string to be copied.
 *
 *
 * Return: pointer to the copied string.
*/

char *_strdup(char *str)
{
	char *s;
	int i = 0, x = 0;

	s = malloc(x * sizeof(*str) + 1);
	if (str == NULL)
		return (NULL);
	while (str[x] != '\0')
		x++;
	if (s == 0)
		return (NULL);
	for (i = 0; i < x; i++)
		s[i] = str[i];
	return (s);
}
