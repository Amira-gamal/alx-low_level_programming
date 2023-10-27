#include <stdio.h>

/**
 * main - program
 * @argc: size of argv array
 * @argv: An array
 * Return: always successful
 */
int main(int argc, char **argv)
{
	argc--;
	printf("%s\n", argv[0]);
	return (0);
}
