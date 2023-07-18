#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int x;
	char c;

	for (x = 1; x <= 10; x++)
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
	_putchar('\n');
	return (0);
}
