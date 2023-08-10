#include <stdlib.h>
#include "main.h"

unsigned int string_length(char *str);
/**
 * string_length - Finds the length of the strings
 * @str: The string
 * Return: String length
 */

unsigned int string_length(char *str)
{
	unsigned int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * string_nconcat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Number of characters to be taken from s2
 * Return: Pointe to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s1_length, s2_length;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_length = string_length(s1);
	s2_length = string_length(s2);

	if (n >= s2_length)
		n = s2_length;

	result = malloc(s1_length + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		result[i + j] = s2[j];
	}

	result[i + j] = '\0';

	return (result);
}
