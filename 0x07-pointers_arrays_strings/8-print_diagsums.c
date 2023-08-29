#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of diagonals of a square matrix.
 * @a: Pointer to the start of the matrix (1D array).
 * @size: Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum_diag1 = 0;
	int sum_diag2 = 0;

	int i;
	for (i = 0; i < size; i++)
	{
		sum_diag1 += a[i * size + i];
		sum_diag2 += a[i * size + (size - 1 - i)];
	}

	printf("Sum of diagonal 1: %d\n", sum_diag1);
	printf("Sum of diagonal 2: %d\n", sum_diag2);
}
