#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int i;
        unsigned long numbers[50];

	numbers[0] = 1;
	numbers[1] = 2;

	for (i = 2; i < 49; i++)
	{
		numbers[i] = numbers[i - 1] + numbers[i - 2];
	}

	for (i = 0; i < 50; i++)
	{
		printf("%lu, ", numbers[i]);
	}
	printf("\n");
	return (0);
}
