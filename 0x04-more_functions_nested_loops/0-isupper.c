#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to be checked
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
