#include <stdio.h>

/**
 * main - Prints the alphabetic in lowercase followed by a new line
 *
 * Return: Always (Success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar ('\n');
	return (0);
}
