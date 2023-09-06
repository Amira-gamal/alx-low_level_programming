#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string to compare
* @s2: second string to compare
* Return: The difference s1 - s2
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}