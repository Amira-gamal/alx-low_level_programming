#include "main.h"

/**
* _strncat - concatenates n bytes from a string to another
* @dest: destination string
* @src: source string
* @n: an input integer
* Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (x = 0; x < n &&  src[x] != '\0'; x++)
	{
		dest[i + x] = src[x];
	}
	dest[i + x] = '\0';
	return (dest);
}
