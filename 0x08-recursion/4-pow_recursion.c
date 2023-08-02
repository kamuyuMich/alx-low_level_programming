#include "main.h"

/**
 * _pow_recursion - Computes the power of an integer raised to another integer
 * @x: The base integer
 * @y: The exponent
 * Return: Power of x raised to y
 */

int _pow_recursion(int x, int y)
{
	int z;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		z = x * _pow_recursion(x, y - 1);
		return (z);
	}
}
