#include <unistd.h>
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string.
 *
 * Return: None.
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	while (length > 0)
	{
		s--;
		write(1, s, 1);
		length--;
	}

	write(1, "\n", 1);
}
