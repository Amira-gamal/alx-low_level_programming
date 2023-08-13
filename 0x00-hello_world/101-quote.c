#include <unistd.h>

/**
 * main - Entry point
 * A C program that prints aline of text with write function
 * Return: 1 if success.
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
