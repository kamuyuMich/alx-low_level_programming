#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string
 * Return: Nothing
 */

void print_rev(char *s)
{
	int x, i;

	x = 0;
	while (*s != '\0')
	{
		s++;
		x++;
	}
	s--;
	for (i = x; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
