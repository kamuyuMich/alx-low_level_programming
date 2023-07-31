#include "main.h"

/**
 * _memset - Sets a char b into n memory locations
 * @s: Pointer to the area in memory
 * @b: The character to be set
 * @n: The number of locations to be filled
 * Return: Pointer to the area in memory after filling
 */

char  *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
