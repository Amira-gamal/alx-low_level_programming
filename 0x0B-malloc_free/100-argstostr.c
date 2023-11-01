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
	char *result;
	int i, x, y = 0, z = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
			z++;
	}
	result = malloc((z + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
			result[y++] = av[i][x];
		result[y++] = '\n';
	}
	result[z] = '\n';
	return (result);
}
