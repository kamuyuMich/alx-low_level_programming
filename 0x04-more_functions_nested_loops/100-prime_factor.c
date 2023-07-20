#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest prime factor of 6112852475143
 * Return: Always 0
 */

int main(void)
{
	unsigned long int n, i;

	n = 6112852475143;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (i = 3; i * i <= n; i += 2)
	{
		while ((n % i == 0))
			n = n / i;
	}

	/* res = (n > 2) ? n : 2; */
	printf("%lu\n", n);
	return (0);
}


