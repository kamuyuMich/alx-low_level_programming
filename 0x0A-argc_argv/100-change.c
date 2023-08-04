#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int cents, numCoins, i;

	int coins[5] = {25, 10, 5, 2, 1};
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	numCoins = 0;

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			numCoins++;
		}
	}
	printf("%d\n", numCoins);

	return (0);
}
