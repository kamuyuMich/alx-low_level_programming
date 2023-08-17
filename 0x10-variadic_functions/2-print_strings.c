#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed as arguments
 * @separator: A string that separates the strings
 * @n: The number of strings to be printed
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		x = va_arg(args, char*);
		if (x == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", x);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
