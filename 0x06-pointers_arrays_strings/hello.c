#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: void
 */

int main(void)
{
	int i, j;

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d", i);
			printf("%d\n", j);
		}
	}
	return (0);
}
