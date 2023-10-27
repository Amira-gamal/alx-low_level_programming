#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main Entry
 * @argc: input
 * @argv: input
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, x, y = 0;

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{
			if (!isdigit(argv[i][x]))
			{
				printf("Error\n");
				return (1);
			}
		}
		y += atoi(argv[i]);
	}
	printf("%d\n", y);
	return (0);
}
