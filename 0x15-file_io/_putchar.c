/**
 * _putchar - prints a character
 * @c: The character to be printed
 * Return: The character printed
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
