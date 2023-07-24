#include "main.h"

/**
 * puts2 - Prints characters in even positions
 * @str: The string
 * Return: void
 */

void puts2(char *str)
{
	int x, i;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}

	for (i = 0; i < x; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

