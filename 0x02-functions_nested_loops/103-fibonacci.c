#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int i, sum = 0;
	unsigned long numbers[50];

	numbers[0] = 1;
	numbers[1] = 2;

	for (i = 2; i < 50; i++)
	{
		numbers[i] = numbers[i - 1] + numbers[i - 2];
	}

	for (i = 0; i < 50; i++)
	{
		if (numbers[i] < 4000000)
		{
			if (numbers[i] % 2 == 0)
			{
				sum += numbers[i];
			}
		}
		else
		{
			break;
		}
	}
	printf("%d\n", sum);
	return (0);
}
