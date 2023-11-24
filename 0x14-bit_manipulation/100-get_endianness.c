#include "main.h"

/**
 * get_endianness - checks the  machine
 * Return: ---------
 */

int get_endianness(void)
{
	unsigned int test_value = 1;
	char *byte_pointer = (char *)&test_value;

	return ((*byte_pointer == 1) ? 1 : 0);
}
