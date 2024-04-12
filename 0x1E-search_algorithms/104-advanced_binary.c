#include "search_algos.h"

/**
 * print_array - Prints an array
 * @array: Pointer to the array
 * @start: Starting index of the array
 * @end: Ending index of the array
 */
void print_array(int *array, size_t start, size_t end)
{
    printf("Searching in array: ");
    for (size_t i = start; i <= end; i++)
    {
        printf("%d", array[i]);
        if (i < end)
            printf(", ");
    }
    printf("\n");
}

/**
 * advanced_binary_recursive - Recursive helper function for advanced_binary
 * @array: Pointer to the array
 * @low: Lower bound of the search range
 * @high: Upper bound of the search range
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of value, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
    if (low > high)
        return -1;

    size_t mid = low + (high - low) / 2;

    print_array(array, low, high);

    if (array[mid] == value && (mid == 0 || array[mid - 1] != value))
        return mid;
    else if (array[mid] >= value)
        return advanced_binary_recursive(array, low, mid, value);
    else
        return advanced_binary_recursive(array, mid + 1, high, value);
}

/**
 * advanced_binary - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of value, or -1 if not found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return advanced_binary_recursive(array, 0, size - 1, value);
}
