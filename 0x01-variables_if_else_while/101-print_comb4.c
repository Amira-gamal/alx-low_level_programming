#include <stdio.h>

/**
 * main - Entry point
 * A program that prints all possible different combinations of three digits
 * Return: 0 if success.
*/
int main(void)
{
	int i, x, y;

	for (i = '0'; i <= '9'; i++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				if (i != x && i < x && x != y && x < y)
				{
					putchar(i);
					putchar(x);
					putchar(y);
					if (y == '9' && i == '7' && x == '8')
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
