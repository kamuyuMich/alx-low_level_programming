#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: The string
 * Return: length of string
 */

int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
