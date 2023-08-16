#include "main.h"

/**
*print_last_digit - function that print last digit of a number
*@i: number to be targeted
*Return: returns 0
*/

int print_last_digit(int i)
{
	if (i < 0)
		i = i * -1;
	_putchar((i % 10) + '0');
	return (i % 10);
}
