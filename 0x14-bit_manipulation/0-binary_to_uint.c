#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 * Return: the converted number (sucess), or 0 (error).
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	char current_bit;

	if (b == NULL)
		return (0);
	while ((current_bit = *b++) != '\0')
	{
		if (current_bit == '0')
			result <<= 1;
		else if (current_bit == '1')
			result = (result << 1) | 1;
		else
			return (0);
	}
	return (result);
}
