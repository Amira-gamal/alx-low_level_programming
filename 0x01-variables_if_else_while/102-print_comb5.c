#include <stdio.h>

/**
 * main - Prints multiple combinations
 * Description: Write a program that prints all possible
 * Return: 0
*/

int main(void)
{
	int i, x, y, z;

	for (i = '0'; i <= '9'; i++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				for (z = '0'; z <= '9'; z++)
				{
					if ((i < y) || (i == y && x < z))
					{
						putchar(i);
						putchar(x);
						putchar(' ');
						putchar(y);
						putchar(z);
					if (!(i == '9' && x == '8'))
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
