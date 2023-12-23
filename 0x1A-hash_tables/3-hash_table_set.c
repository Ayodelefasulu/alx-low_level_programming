#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add/update the key/value pair.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with key (duplicated, can be an empty string).
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Check if the key already exists in the list at the index */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* Key found, update the value */
			free(current->value);  /* Free existing value */
			current->value = strdup(value);  /* Dupl. and set new value */
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}

	/* Key not found, create a new node and add it to the beginning of list */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
