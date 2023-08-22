#include <unistd.h>
/**
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 * @str: Pointer to the string.
 *
 * Return: None.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i += 2;
	}

	write(1, "\n", 1);
}
