#include "hash_tables.h"

/**
 * hash_djb2 - The required function implementing
 * the djb2 algorithm.
 * @str: Required string to hash.
 *
 * Return: The hash that has been calculated.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
