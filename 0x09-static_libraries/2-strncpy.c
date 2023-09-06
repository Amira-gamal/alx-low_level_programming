#include "main.h"

/**
* _strncpy - a function that copys the strings
* @dest: Destination of the pointer to the string
* @src: The source value
* @n: The copy limit
* Return: char value
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i]	= src[i];
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
