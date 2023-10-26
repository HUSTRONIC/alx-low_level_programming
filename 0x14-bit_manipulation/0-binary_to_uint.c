#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int.
 * @b: The required pointer pointing to a string.
 * Return: An unsigned int value.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int int_va = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		int_va = int_va << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			int_va = int_va | 1;
		b++;
	}
	return (int_va);
}
