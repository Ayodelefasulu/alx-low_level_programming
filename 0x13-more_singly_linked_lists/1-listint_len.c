#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - prints all data in the list
 * @h: head pointer
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
