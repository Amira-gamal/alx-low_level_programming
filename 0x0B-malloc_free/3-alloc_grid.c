#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Main Enry
 * @width: input
 * @height: input
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int i = 0, x = 0;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (x = 0; x < i; x++)
				free(p[x]);
			free(p);
			return (NULL);
		}
		for (x = 0; x < width; x++)
			p[i][x] = 0;
	}
	return (p);
}
