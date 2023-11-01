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
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);
	size_t total_length = 0;

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;
	result = (char *)malloc(total_length + 1);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	for (int i = 0; i < ac; i++)
	{
		strcat(result, av[i]);
		if (i < ac - 1)
			 strcat(result, "\n");
	}
	return (result);
}
