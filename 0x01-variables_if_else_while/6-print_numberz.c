#include <stdio.h>

/**
  * main - prints all single digit numbers
  *
  * Return: Always (Success)
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
