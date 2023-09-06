#include <stdlib.h>
#include "main.h"

/**
* *str_concat - concatenates two strings
* @s1: string to concatenate
* @s2: other string to concatenate
* Return: pointer to the new string created (Success), or NULL (Error)
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i = 0, x = 0, y = 0, zlen2 = 0;

	while (s1 && s1[y])
		y++;
	while (s2 && s2[z])
		z++;
	s = malloc(sizeof(char) * (y + z + 1));
	if (s == NULL)
		return (NULL);
	if (s1)
	{
		while (i < y)
		{
			s[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (y + z))
		{
			s[i] = s2[j];
			i++;
			x++;
		}
	}
	s[i] = '\0';
	return (s);
}
