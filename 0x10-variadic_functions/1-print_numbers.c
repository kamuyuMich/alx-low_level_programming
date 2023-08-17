#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers passed as arguments
 * @separator: The string that separates the numbers while being printed
 * @n: Total numbers of integers to be printed
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		x = va_arg(args, unsigned int);
		printf("%d", x);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
