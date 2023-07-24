#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @str: The string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int x;

	x = 0;
	do {
		_putchar(str[x]);
		x++;
	} while (str[x] != 0);
	_putchar('\0');
}
