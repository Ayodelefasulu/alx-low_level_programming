#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog and stores a copy of name and owner.
 * @name: The name of the dog.
 * @age: The age of the dog in years.
 * @owner: The name of the dog's owner.
 *
 * Description:
 * This function creates a new dog with the specified name, age, and owner.
 * It allocates memory for the new dog and copies the name and owner strings.
 * If memory allocation fails, it returns NULL.
 *
 * Return: A pointer to the newly created dog,
 * or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name == NULL || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = strdup(name);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->age = age;
	newDog->owner = strdup(owner);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	return (newDog);
}
