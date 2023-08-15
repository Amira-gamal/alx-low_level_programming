#include <stdio.h>

/**
 * main - Entry point
 * A program that prints all possible different combinations of two digits
 * Return: 0 if success.
*/
int main(void)
{
	int i, x;

	for (i = '0'; i <= '9'; i++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			if (i != x && i < x)
			{
				putchar(i);
				putchar(x);
				if (i == '8' && x == '9')
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
