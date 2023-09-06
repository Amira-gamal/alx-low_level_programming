#include <stdlib.h>
#include "main.h"

/**
* _strdup- copy a string.
* @str: string to be copied.
* Return: pointer to the copied string.
*/

char *_strdup(char *str)
{
	int x = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
		return (NULL);

	while (x < i)
	{
		s[x] = str[x];
		x++;
	}
	s[x] = '\0';
	return (s);
}
