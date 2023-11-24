#include "main.h"
#include <stddef.h>

/**
 * clear_bit - sets a bit
 * @n: number
 * @index: position
 * Return: 1 on success, -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int size = sizeof(unsigned long int) * 8;

	if (index >= size)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
