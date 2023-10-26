#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * get_bit - The function that returns the value of a bit.
 * @index: index at which to be checked
 * @n: the required number containing bits to be checked
 * Return: value of the bit, else -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
