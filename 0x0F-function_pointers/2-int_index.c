#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	k = 0;
	while (k < size)
	{
		if (cmp(array[k]) != 0)
			return (k);
		k++;
	}
	return (-1);
}
