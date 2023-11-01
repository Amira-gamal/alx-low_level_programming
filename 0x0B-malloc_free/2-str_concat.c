#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Main Entry
 * @s1: input
 * @s2: input
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int i, x, y, z;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (x = 0; s2[x] != '\0'; x++)
		;

	s = (char *)  malloc(((i + x) + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (y = 0; y < i; y++)
		s[y] = s1[y];
	z = x;
	for (x = 0; x < z; x++)
	{
		s[y] = s2[x];
		y++;
	}
	return (s);
}
