#include "main.h"

/**
* _strcat - a function that concatenates two strings.
* @dest: an input string
* @src: an input string
* Return: A pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	int i, x;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (x = 0; src[x] != '\0'; x++)
	{
		dest[i++] = src[x];
	}
	return (dest);
}
