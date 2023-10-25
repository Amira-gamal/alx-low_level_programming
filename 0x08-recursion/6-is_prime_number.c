#include "main.h"

int prime(int x, int i);
/**
 * is_prime_number - Returns if a number is prime
 * @n: the number
 * Return: integer value
*/

int is_prime_number(int n)
{
	return (prime(n, 1));
}

/**
 * prime - calculates if a number is prime recursively
 * @x: number
 * @i: number
 *
 * Return: 1 if n is prime, 0 if not
*/

int prime(int x, int i)
{
	if (x <= 1)
		return (0);
	if (x % i == 0 && i > 1)
		return (0);
	if ((x / i) < i)
		return (1);
	return (prime(x, i + 1));
}
