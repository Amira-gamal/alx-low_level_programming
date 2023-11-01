#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Main Entry
 * @str: input
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ds;
	int i = 0, x;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	ds = malloc(sizeof(char) * (i + 1));
	if (ds == NULL)
		return (NULL);
	for (x = 0; x < i; x++)
		ds[x] = str[x];
	return (ds);
}
