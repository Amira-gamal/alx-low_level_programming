#include "main.h"

/**
* rev_string - reverses a string
* @s: string to be reversed
*/

void rev_string(char *s)
{
	char x;
	int i, y;

	for (y = 0; s[y] != '\0'; y++)
		;
	for (i = 0; i < (y / 2); i++)
	{
		x = s[i];
		s[i] = s[y - 1 - i];
		s[y - 1 - i] = x;
	}
}
