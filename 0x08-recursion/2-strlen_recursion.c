#include "main.h"

/**
 * _strlen_recursion - find length of a string
 * @s: string to be counted
 * Return: return count
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
