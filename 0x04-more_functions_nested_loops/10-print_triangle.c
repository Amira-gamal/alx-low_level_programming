#include "main.h"

/**
 * print_triangle - draws a triangle using multiple terminal lines and #'s.
 * @size: the height of the triangle.
*/

void print_triangle(int size)
{
	int i, x;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (x = size; x >= 1; x--)
			{
				if (i < x)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
