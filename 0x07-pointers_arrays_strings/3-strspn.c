#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: The string to be searched.
* @accept: The prefix to be measured.
* Return: The number of bytes in s which
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, x;

	i = 0;
	while (s[i] != '\0')
	{
		x = 0;
		while (accept[x] != '\0' && s[i] != accept[x])
			x++;
		if (accept[x] == '\0')
			return (i);
		i++
	}
	return (i);
}
