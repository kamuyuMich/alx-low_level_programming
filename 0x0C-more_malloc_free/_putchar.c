#include <unistd.h>
/**
 * _putchar - Prints a character
 * @c: The character to be printed
 * Return: Print the character
 */

int _putchar(char c)
{
	return (write(1, &c, 1);
}
