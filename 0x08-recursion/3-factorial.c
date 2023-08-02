#include "main.h"

/**
 * factorial - Computes the factorial of a number
 * @n: The number whose factorial will be computed
 * Return: Factorial of the number
 */

int factorial(int n)
{
	int x;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		x = n * factorial(n - 1);
		return (x);
	}
}
