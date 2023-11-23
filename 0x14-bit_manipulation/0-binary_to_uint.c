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
	while ((current_char = *b) != '\0')
	{
		if (current_char != '0' && current_char != '1')
			return (0);
		 result = (result << 1) + (current_char - '0');
		 b++;
	}
	return (result);
}
