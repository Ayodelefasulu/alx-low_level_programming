#include <stdio.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;

	/* Allocate memory for the array of pointers */
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		free(table);  /* Free the hash table if array allocation fails */
		return (NULL);
	}

	/* table->array = *array; */

	return (table);
}
