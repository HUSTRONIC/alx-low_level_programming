#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: the requires number to be set
 * @index: index at which to set bit
 *
 * Return: 1 else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	k = 1 << index;
	*n = *n | k;
	return (1);
}

