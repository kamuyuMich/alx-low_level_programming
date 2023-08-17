#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Adds up all the integers given as arguments)
 * @n: The first integer
 * Return: Total sum of the integers
 */

int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		total += va_arg(args, unsigned int);
	}
	va_end(args);

	return (total);
}


