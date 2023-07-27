#include "main.h"

/**
 *  _strcmp - Compares two strings
 *  @s1: The first string
 *  @s2: The second string
 *  Return: Integer 0 if str1 == str2
 *  if str1 < str2 Negative difference of the first unmatched characters
 *  if str1 > str2 Positive difference of the first unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
