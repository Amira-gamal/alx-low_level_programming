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

	for (x = 0; s[x] != '\0'; x++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[x] == accept[i])
				continue;
		}
		if (s[x] == '\0')
			continue;
	}
	return (x);
}
