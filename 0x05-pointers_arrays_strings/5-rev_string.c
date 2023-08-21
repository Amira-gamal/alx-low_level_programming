#include "main.h"

/**
* rev_string - reverses a string
* @s: string to be reversed
*/

void rev_string(char *s)
{
	char *x = s;

	while (x)
	{
		x++;
	}
	x = x - 1;
	while (x)
	{
		_putchar(*s);
		x--;
	}
}
