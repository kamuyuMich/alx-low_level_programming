#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: The input value
 * Return: str
 */

char *rot13(char *str)
{
	char c;

	char *original_str = str;

	while (*str != '\0')
	{
		c = *str;

		if (c >= 'A' && c <= 'Z')
		{
			c = 'A' + (c - 'A' + 13) % 26;
		}
		else if (c >= 'a' && c <= 'z')
		{
			c = 'a' + (c - 'a' + 13) % 26;
		}

		*str = c;
		str++;
	}
	return (original_str);
}
