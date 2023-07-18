#include "main.h"

/**
 * _isalpha - Checks whether a character is an alphabet
 * @c: Character being checked
 * Return: 1 if alphabet 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
