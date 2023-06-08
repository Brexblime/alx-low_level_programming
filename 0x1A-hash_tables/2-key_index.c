#include "hash_tables.h"

/**
 * key_index - computes the index
 * @key: the key
 * @size: the size of the array
 * Return: the index at which the key/value pair should be stored 
 *	in the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
