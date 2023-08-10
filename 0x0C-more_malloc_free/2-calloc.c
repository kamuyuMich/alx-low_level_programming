#include <stdlib.h>
#include "main.h"
char *_memset(char *s, char b, unsigned int n);
/**
 * _calloc - Allocates memory
 * @nmemb: Number of elements
 * @size: Size of each element
 * Return: Pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	_memset(ptr, 0, nmemb * size);
	return (ptr);
}

/**
 * _memset - fills the memory with a constanr byte
 * @s: memory area to be filled
 * @b: character to be filled
 * @n: number of times the character b is to be copied
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
