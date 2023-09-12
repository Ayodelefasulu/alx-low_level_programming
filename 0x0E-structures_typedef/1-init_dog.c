#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initializes a struct dog variable.
 * @d: Pointer to the struct dog variable to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 *
 * Description:
 * This function initializes a struct dog variable
 * with the provided values for name, age, and owner.
 *
 * Return: None (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
