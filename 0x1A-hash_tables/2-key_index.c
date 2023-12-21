#include "hash_tables.h"

/**
 * key_index - the function to get the index at which
 * a key/value pair should
 * be stored in array of a hash table.
 * @key: The required key to
 * get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: index of the key.
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
