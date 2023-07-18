#include "main.h"

/**
 *  _islower - Returns if a character is lowercase
 *  @c: Character being checked
 *  Return: 1 for lowercase 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
