#include "main.h"

/**
 * main - Entry point
 * A program that prints _putchar
 * Return: 0 if success.
*/
int main(void)
{
	char x[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(x[i]);
		_putchar('\n');
	}
	return (0);
}
