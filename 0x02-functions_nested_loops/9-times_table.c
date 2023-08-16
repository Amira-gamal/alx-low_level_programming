#include "main.h"

/**
*times_table - prints the 9 times table
*
*/

void times_table(void)
{
	int y, x, z;

	for (y = 0; y <= 9; y++)
	{
		_putchar('0');
		for (x = 1; x <= 9; x++)
		{
			_putchar(',');
			_putchar(' ');
			z = y * x;
			if (z <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((x / 10) + '0');
			}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
