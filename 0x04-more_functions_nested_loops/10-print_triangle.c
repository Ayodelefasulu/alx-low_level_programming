#include "main.h"

/**
 * print_triangle - Prints a triangle using '#'.
 * @size: The size of the triangle.
 *
 * Description: Prints a right-angled triangle with base and height of
 * 'size'. If 'size' is 0 or less, prints only a new line.
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
