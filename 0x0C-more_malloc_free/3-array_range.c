#include "main.h"
#include <stdlib.h>

/**
 * array_range - ...
 * @min: ...
 * @max: ...
 *
 * Return: integer value
*/

int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);

	int i;
	int *arr;

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
