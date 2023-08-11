#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a text according number.
 * description : return number whether it is greater than 5, less than 6, or 0.
 * return always : 0.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int L_digit = n % 10;
	if (L_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, L_digit);
	}
	else if (L_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, L_digit);
	}
	else if (L_digit < 6 && L_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, L_digit);
	}

	return (0);
}
