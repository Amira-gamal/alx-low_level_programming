#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - ...
 * @n: ...
 *
 * Return: ...
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(args, n);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
