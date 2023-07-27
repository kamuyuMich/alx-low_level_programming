#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to be used from src
 * Return: Pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
