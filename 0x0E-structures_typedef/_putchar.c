/**
 * _putchar - Prints a charcater on the screen
 * @c: The character to be printed
 * Return: The printed character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
