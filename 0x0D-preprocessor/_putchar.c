/**
 * _putchar - Prints a character on the screen
 * @c: The character to be printed
 * Return: The character in ASCII value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
