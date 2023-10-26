#include "main.h"
int strlen_recursion(char *s);
int pali_checker(char *s, int l);

/**
 * is_palindrome - check if palidrome
 * @s: pointer to string to be counted
 * Return: return value
*/

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	else
		return (pali_checker(s, len));
}

/**
 * strlen_recursion - find length of a string
 * @s: string to be counted
 * Return: return count
*/

int strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 * pali_checker - resolve palidrome
 * @s: pointer to string to be counted
 * @l: int type
 * Return: return palidrome
 */

int pali_checker(char *s, int l)
{
	if (l <= 0)
		return (1);
	if (s[0] == s[l - 1])
	{
		return (pali_checker(s + 1, l - 2));
	}
	else
		return (0);
}
