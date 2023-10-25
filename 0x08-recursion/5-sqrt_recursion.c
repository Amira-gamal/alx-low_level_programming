#include "main.h"

int square(int x, int i);
/**
 *_sqrt_recursion - Returns the natural square root of a number
 *@n: number
 *Return: the natural square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square(n, 1));
}

/**
 *square - returns the natural square root of a number.
 *@x: number.
 *@i: number.
 * Return: square root or -1.
*/

int square(int x, int i)
{
	if (x == (i * i))
		return (x);
	if (x < (i * i))
		return (-1);
	return (square(x, i + 1));
}
