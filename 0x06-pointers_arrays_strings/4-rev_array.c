#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 *
 * Return: None.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;

	/* Swap elements from the outer ends towards the center */
	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
