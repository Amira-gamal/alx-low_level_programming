#include "main.h"

/**
* *_memset - fills memory with a constant byte
* @s: memory area to be filled
* @b: char to copy
* @n: number of times to copy b
* Return: pointer to the memory area s
*/

har *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++; n--)
	{
		s[i] = b;
	}
	return (s);
}