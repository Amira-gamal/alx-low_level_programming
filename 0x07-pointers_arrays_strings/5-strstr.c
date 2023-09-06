#include "main.h"

/**
* _strstr - prints the consecutive caracters of s1 that are in s2.
* @haystack: source string
* @needle: searching string
* Return: new string.
*/

char *_strstr(char *haystack, char *needle)
{
	int i, x;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (x = 0; needle[x] != '\0'; x++)
		{
			if (haystack[i + x] != needle[x])
				break;
		}
		if (!needle[x])
			return (&haystack[i]);
	}
	return (NULL);
}
