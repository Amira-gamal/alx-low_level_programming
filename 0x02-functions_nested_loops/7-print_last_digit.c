#include "main.h"

/**
*print_last_digit - function that print last digit of a number
*@i: number to be targeted
*Return: returns 0
*/

int print_last_digit(int i)
{
	int x = i % 10;

	if (x < 0)
		x *= -1;
	_putchar(x + '0');
	return (x);
}
