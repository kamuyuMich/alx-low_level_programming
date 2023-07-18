#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int i, sum1, sum2, result;

	sum1 = 0;
	sum2 = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum1 = sum1 + i;
		}
		if (i % 5 == 0)
		{
			sum2 = sum2 + i;
		}
	}
	result = sum1 + sum2;
	printf("%d\n", result);
	return (0);
}
