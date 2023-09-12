#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog.
 * @d: Pointer to the struct dog variable to be printed.
 *
 * Description:
 * This function prints the details of a struct dog variable.
 * If an element of the
 * struct is NULL, it prints "(nil)" instead of the NULL element.
 *
 * Return: None (void)
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
