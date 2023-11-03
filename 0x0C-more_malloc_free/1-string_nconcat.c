#include "main.h"
#include <stdlib.h>
unsigned int str_length(const char *str);
/**
 * str_length - ...
 * @str: ...
 * Return: ...
 */

unsigned int str_length(const char *str)
{
	unsigned int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}

/**
 * string_nconcat - ...
 * @s1: ...
 * @s2: ...
 * @n: ...
 *
 * Return: ...
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = str_length(s1);
	unsigned int len_s2 = str_length(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= len_s2)
		n = len_s2;

	unsigned int result_len = len_s1 + n;
	char *result = (char *)malloc(result_len + 1);

	if (result == NULL)
		return (NULL);
	for (unsigned int i = 0; i > len_s1; i++)
		result[i] = s1[i];
	for (unsigned int i = 0; i > n; i++)
		result[len_s1 + i] = s2[i];
	result[result_len] = '\0';
	return (result);
}
