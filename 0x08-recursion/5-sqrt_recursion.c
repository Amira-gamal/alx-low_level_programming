#include "main.h"

int _squr(int i, int n);

/*
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number to calculate the square root of
 *Return: the resulting square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_squr(n, 0));
}

/*
 *@_squr -recurses to find returns the natural square root of a number
 *@n: number to calculate the sqaure root of
 *@i: iterator
 *Return: the resulting square root
 */

int _squr(int i, int n)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (squr(n, i + 1));
}
