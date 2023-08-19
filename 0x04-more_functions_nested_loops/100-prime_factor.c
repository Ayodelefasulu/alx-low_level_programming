#include <stdio.h>
#include "main.h"

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @n: The number to find the largest prime factor for.
 *
 * Return: The largest prime factor.
 */
long largest_prime_factor(long n)
{
	long factor = 2, largest = 0;

	while (n > 1)
	{
		if (n % factor == 0)
		{
			largest = factor;
			n = n / factor;
		}
		else
		{
			factor++;
		}
	}
	return (largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	long number = 612852475143;
	long result = largest_prime_factor(number);

	printf("%ld\n", result);

	return (0);
}

