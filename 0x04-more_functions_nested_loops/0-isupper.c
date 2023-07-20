#include "main.h"

/*
 * _isupper - Checks if a character given is uppercase
 * and returns 1 if so
 * @c: The character being checked
 * Return: 1 if uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
