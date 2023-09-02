#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_positive_number - Checks if a string represents a positive number.
 * @str: The input string to check.
 * Return: 1 if it's a positive number, 0 otherwise.
 */
int is_positive_number(const char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (0);
	}

	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}

	return (1);
}

/**
 * main - Adds positive numbers passed as command-line arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			int num;

			num = atoi(argv[i]);
			if (num > 0)
			{
				sum += num;
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}
