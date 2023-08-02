#include "main.h"
int _find_sqrt(int, int);

/**
 * _sqrt_recursion - Computes the natural square root of a number
 * @n: The number whose square root is being computed
 * Return: The square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_find_sqrt(n, 0));
	}
}

/**
 * _find_sqrt - The function that actually finds the square root
 * @x: The number whose square root we are finding
 * @y: The iterator
 * Return: Square root to the calling function
 */

int _find_sqrt(int x, int y)
{
	if (y * y > x)
	{
		return (-1);
	}
	else if (y * y == x)
	{
		return (y);
	}
	else
	{
		return (_find_sqrt(x, y + 1));
	}
}
