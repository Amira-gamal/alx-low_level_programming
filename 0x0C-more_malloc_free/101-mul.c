#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * is_valid_number - Check the code
 * @str: number of arguments
 * Return: Nothing
 */

int is_valid_number(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply_numbers - Check the code
 * @num1: number of arguments
 * @num2: arguments
 * Return: Nothing
 */

int multiply_numbers(const char *num1, const char *num2)
{
	return (atoi(num1) * atoi(num2));
}

/**
 * main - Check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	const char *num1 = argv[1];
	const char *num2 = argv[2];

	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		return (98);
	}
	if (!is_valid_number(num1) || !is_valid_number(num2))
	{
		fprintf(stderr, "Error\n");
		return (98);
	}
	int result = multiply_numbers(num1, num2);

	printf("%d\n", result);
	return (0);
}

