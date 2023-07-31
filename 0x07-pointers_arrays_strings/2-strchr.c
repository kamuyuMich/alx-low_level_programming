#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a given character in a string
 * @s: The string
 * @c: The character being checked
 * Return: A pointer to the first occurrence of character c
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
