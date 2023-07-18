#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer being checked
 * Return: Always 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n + 2 * n;
		_putchar(n);
	}
	else
		_putchar(n);
	_putchar('\n');
	return n;
}
