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
		printf("%d", i);
		i++;
	}
	printf('\n');
	return (0);
}
