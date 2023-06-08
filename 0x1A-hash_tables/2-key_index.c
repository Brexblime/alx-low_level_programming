#include "hash_tables.h"
/**
 * key_index - gives the index of a key in a hash table.
 * @key: The key
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key == NULL || size == 0)
	{
		return 0;
	}

	hash = hash_djb2(key);

	return (hash % size);
}
