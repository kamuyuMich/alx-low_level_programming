#include <stdio.h>

/**
 * main - Entry point
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (*argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
