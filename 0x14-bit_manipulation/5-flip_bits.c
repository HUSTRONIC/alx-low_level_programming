#include <stdio.h>
#include "main.h"

/**
 * flip_bits - the function that count
 * s the number of bits to change.
 * @n: the first input to the function
 * @m: the second Number Input to the function.
 * Return: the required number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int z = 0, k, r;

	while (!(n == 0 && m == 0))
	{
		k = n & 1;
		r = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (k != r)
			z += 1;
	}
	return (z);
}
