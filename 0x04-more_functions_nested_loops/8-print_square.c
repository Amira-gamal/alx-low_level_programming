#include "main.h"

/**
 * print_square - draws a square using multiple terminal lines and #'s.
 * @size: the number of # to print in each line.
*/

void print_square(int size)
{
	int i, x;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < i; x++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
