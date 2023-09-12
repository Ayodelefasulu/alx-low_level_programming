#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees memory allocated for a dog.
 * @d: Pointer to the dog_t variable to be freed.
 *
 * Description:
 * This function takes a pointer to a dog_t variable and frees the memory allocated
 * for the dog's name, owner, and the dog structure itself.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
