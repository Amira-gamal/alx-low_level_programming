#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	int i = 0, x = 0, y = 0, z = 0;
	char *p;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (x = 0; av[i][x]; x++)
			y++;
	}
	p = (char *)malloc(y * sizeof(char) + ac + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (x = 0; av[i][x]; x++, z++)
			p[z] = av[i][x];
		p[z] = '\n';
		z++;
	}
	p[z] = '\0';
	return (p);
}
