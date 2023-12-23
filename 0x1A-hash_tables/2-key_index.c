#include "hash_tables.h"
/**
 * key_index - hash function
 * @key: key to be hashed
 * @size: size of the hash table
 *
 * Return: Returns the hash or index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index, c;

	while ((c = *key++))
	{
		index += c;
	}
	hash = index % size;

	return (hash);
}
