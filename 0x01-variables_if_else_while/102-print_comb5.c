#include <stdio.h>

/**
 * main - Entry point
 * A program that prints all possible different combinations of two two-digit
 * Return: 0 if success.
*/
int main(void)
{
	int i = 0, x;

	for (i = 0; i <= 99; i++)
	{
		for (x = i; x <= 99; x++)
		{
			if (i != x)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				if (i == 98 && x == 99)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
