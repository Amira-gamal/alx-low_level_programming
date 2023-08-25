#include "main.h"

/**
* reverse_array - reverses an array of integers
* @a: array to be reversed
* @n: number of elements in the array
* Return: nothing.
*/

void reverse_array(int *a, int n)
{
	int i, x, y;

	for (i = 0; x = (n - 1); i < x; i++; x--)
	{
		y = a[i];
		a[i] = a[x];
		a[x] = y;
	}
}
