#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main Entry
 * @argc: input
 * @argv: input
 * Return: Always 0 (success)
**/

int main(int argc, char *argv[])
{
	int a, c = 0;

	if (argc == 2)
	{
		a = atoi(argv[1]);
		while (a > 0)
	{
		if (a >= 25)
			a -= 25;
		else if (a >= 10)
			a -= 10;
		else if (a >= 5)
			a -= 5;
		else if (a >= 2)
			a -= 2;
		else if (a >= 1)
			a -= 1;
		c += 1;
	}
		printf("%d\n", c);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
