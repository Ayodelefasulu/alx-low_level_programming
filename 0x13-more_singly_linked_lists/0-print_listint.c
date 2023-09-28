#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - prints all data in the list
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("The list is empty\n");
	}

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
