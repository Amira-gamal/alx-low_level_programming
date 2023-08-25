#include "main.h"

/**
* cap_string - a function that capitalizes all words of a string.
* @x: An input string to capitalize letters
* Return: pointer to s
*/

char *cap_string(char *x)
{
	int i, z;

	char v[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		for (z = 0; z < 13; z++)
		{
			if (x[i] == v[z])
			{
				if (x[i + 1] >= 'a' && x[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
	}
	return (x);
}
