#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The number to be printed
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Recursive base case */
	if (n / 10 == 0)
	{
		_putchar('0' + n);
		return;
	}

	/* Recursive call to print the remaining digits */
	print_number(n / 10);

	/* Print the current digit */
	_putchar('0' + n % 10);
}
