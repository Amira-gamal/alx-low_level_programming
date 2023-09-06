#include <stdio.h>
#include <stdlib.h>

/**
* main - returns the min numbers of coins per given ammount of money.
* @argc: argument count or size of arguments.
* @argv: argument vector
* Return: 0 success 1 failure.
*/

int main(int argc, char **argv)
{
	int i, x, y = 0;
	int coins[] = {25, 10, 5, 2, 1};

	i = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	for (x = 0; x < 5; x++)
	{
		if (coins[x] <= i)
		{
			y += i / coins[x];
			i -= (i / coins[x]) * coins[i];
		}
		if (i == 0)
		{
			printf("%d\n", y);
			break;
		}
	}
	return (0);
}
