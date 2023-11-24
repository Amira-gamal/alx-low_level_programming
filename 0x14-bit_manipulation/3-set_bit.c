#include "main.h"

/**
 * set_bit - sets a bit at a position to 1
 * @n: number
 * @index: index
 * Return: 1 on success, -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= (1 << index);
	return (1);
}
