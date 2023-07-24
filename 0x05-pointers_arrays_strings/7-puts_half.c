#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string given
 * Return: void
 */

void puts_half(char *str)
{
	int i, n, x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	x--;

	if ((x - 1) % 2 == 0)
	{
		n = x / 2;
		for (i = n; i <= x; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = (x - 1) / 2;
		for (i = n + 2; i <= x; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

