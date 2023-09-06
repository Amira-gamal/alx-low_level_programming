#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - Initializes with 0 a matrix
* @width: number of columns.
* @height: number of rows.
* Return: pointer to the matrix.
*/

int **alloc_grid(int width, int height)
{
	int **grid, w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (w = 0; w < height; w++)
	{
		grid[w] = (int *)malloc(sizeof(int) * width);
		if (grid[w] == NULL)
			return (NULL);
	}

	for (w = 0; w < height; w++)
		for (h = 0; h < width; h++)
			grid[w][h] = 0;
	return (grid);
}
