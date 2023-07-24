#include "main.h"

/**
 * rev_string - Reverses a given string
 * @s: The string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int x, i;
	char temp;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}

	for (i = 0; i < x / 2; i++)
	{
		temp = s[i];
		s[i] = s[x - 1 - i];
		s[x - 1 - i] = temp;
	}
}
