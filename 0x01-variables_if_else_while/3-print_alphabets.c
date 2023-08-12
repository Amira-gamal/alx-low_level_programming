#include <stdio.h>

/**
 * main - Prints the alphabetic in lowercase and uppercas
 *
 * Return: Always (Success)
 */

int main(void)
{
	int Az;

	for (Az = 'a'; Az <= 'z'; Az++)
	{
		putchar(Az);
	}
	for (Az = 'A'; Az <= 'Z'; Az++)
	{
		putchar(Az);
	}

	putchar('\n');

	return (0);
}
