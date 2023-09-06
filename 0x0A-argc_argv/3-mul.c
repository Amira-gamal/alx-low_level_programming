#include <stdio.h>
#include <stdlib.h>

/**
* main - print the multiplication of two arguments.
* @argc: argument count or size of arguments.
* @argv: argument vector
* Return: 1 if are less of 2 arguments otherwise 0.
*/

int main(int argc, char **argv)
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
