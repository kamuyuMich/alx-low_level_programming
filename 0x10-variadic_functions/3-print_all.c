#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints arguments based on format
 * @format: A list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	const char *format_ptr = format;
	char c_arg, *s_arg;
	int i_arg, printed = 0;
	float f_arg;

	va_start(args, format);
	while (format && *format_ptr)
	{
		switch (*format_ptr)
		{
			case 'c':
				c_arg = va_arg(args, int);
				printf("%c", c_arg);
				break;
			case 'i':
				i_arg = va_arg(args, int);
				printf("%d", i_arg);
				break;
			case 'f':
				f_arg = va_arg(args, double);
				printf("%f", f_arg);
				break;
			case 's':
				s_arg = va_arg(args, char *);
				if (s_arg == NULL)
					s_arg = "(nil)";
				printf("%s", s_arg);
				break;
		}
		if (format_ptr[1] && (format_ptr[1] == 'c' || format_ptr[1] == 'i' ||
					format_ptr[1] == 'f' || format_ptr[1] == 's'))
			printf(", ");
		format_ptr++;
		printed = 1;
	}
	va_end(args);
	if (printed)
		printf("\n");
}
