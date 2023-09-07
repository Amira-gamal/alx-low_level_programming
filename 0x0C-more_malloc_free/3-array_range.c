#include "main.h"

/**
 * *array_range - make  memory for an array
 * @min: int type
 * @max: int type
 * Return:  return pointer to array
*/

int *array_range(int min, int max)
{
	int *x;
	int i;

	if (min > max)
		return (NULL);
	x = malloc(sizeof(int) * ((max - min) + 1));
	if (x == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		x[i] = min++;
	return (x);
}
