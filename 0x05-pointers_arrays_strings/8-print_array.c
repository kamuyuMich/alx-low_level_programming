#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array
 * @a: The array
 * @n: The number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
