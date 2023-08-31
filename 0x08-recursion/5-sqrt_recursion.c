#include "main.h"

/**
 * sqrt_recursive - Helper function to compute
 * the natural square root of a number.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n,
 * or -1 if n does not have a natural square root.
 */
int sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
	return (guess);

	if (guess * guess > n)
	return (-1);

	return (sqrt_recursive(n, guess + 1));
}

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of n,
 * or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	return (sqrt_recursive(n, 0));
}
