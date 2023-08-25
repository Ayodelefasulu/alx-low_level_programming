#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to be printed.
 *
 * Return: None.
 */
void print_number(int n)
{
	int divisor = 1;
	int digit = 0;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	while (n / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		digit = n / divisor;
		_putchar('0' + digit);
		n -= digit * divisor;
		divisor /= 10;
	}
}
