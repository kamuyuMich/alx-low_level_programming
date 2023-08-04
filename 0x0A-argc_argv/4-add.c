#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_integer(const char *str);
/**
 * main - Entry point
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (is_integer(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

/**
 * is_integer - Checks whether the argument passed is an integer
 * @str: Ponter to the argument
 * Return: Boolean true or false
 */

bool is_integer(const char *str)
{
	if (*str == '\0')
	{
		return (false);
	}

	if (*str == '+' || *str == '-')
	{
		str++;
	}

	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (false);
		}
		str++;
	}
	return (true);
}
