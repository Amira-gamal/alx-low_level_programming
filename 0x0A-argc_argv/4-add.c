#include <stdio.h>
#include <stdlib.h>

/**
* main - print the addition of two positive numbers.
* @argc: argument count or size of arguments.
* @argv: argument vector
* Return: 1 for less of 2 arguments or nondigit numbers, 0 success
*/

int main(int argc, char **argv)
{
	int i, x = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (argv[argc][i] < '0' || argv[argc][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		x +=  atoi(argv[argc]);
	}
	printf("%d\n", x);
	return (0);
}
