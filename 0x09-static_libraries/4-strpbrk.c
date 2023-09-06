#include "main.h"
#include <stdio.h>

/**
* _strpbrk - prints the consecutive caracters of s1 that are in s2.
* @s: source string
* @accept: searching string
* Return: new string.
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
