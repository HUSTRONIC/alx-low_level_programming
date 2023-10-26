#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * clear_bit - This function sets the required value of
 * a bit to 0 at a given index
 * @index: the required index
 * @n: the required input number
 * Return: 1 if success, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
	int j;

	if (index > 63)
		return (-1);
	j = 1 << index;
	*n = *n & (~j);
	return (1);
}
