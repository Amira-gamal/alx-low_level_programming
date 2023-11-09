#include <stdlib.h>

/**
 * array_iterator - ....................
 * @array: .......
 * @size: ..............
 * @action: ............
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
