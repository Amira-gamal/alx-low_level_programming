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

	int i, *arr;
	int size = max - min + 1;

	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min + i;
	return (arr);
}
