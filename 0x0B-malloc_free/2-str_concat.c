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
	int x, y, i;
	char *s;

	i = 0;
	x = 0;
	y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + x))
		x++;
	while (*(s2 + y))
		y++;
	y++; /*add 1 space to print null*/
	s = malloc((x + y) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
		*(s + i) = *(s1 + i);
	for (i = x; i < (x + y); i++)
		*(s + i) = *(s2 + i - x);
	return (s);
}
