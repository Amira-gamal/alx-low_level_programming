#include "main.h"

/**
 * string_nconcat - function to concatnate strings with n bytes
 * @s1: first string
 * @s2: second string
 * @n: int type for size of byte
 * Return: pointer to new memory allocated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, x = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		x++;
	s = malloc(sizeof(char) * (x + 1));
	if (s == NULL)
		return (NULL);
	x = 0;
	for (i = 0; s1[i]; i++)
		s[x++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		s[x++] = s2[i];
	s[x] = '\0';
	return (s);
}
