#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: input pararmeter
 * @max: input parameter
 * Return: 0
 */
int *array_range(int min, int max)
{
	int j;
	int size;
	int *a;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	a = malloc(sizeof(int) * size);
	if (a == NULL)
		return (NULL);
	for (j = 0; j < size; j++, min++)
	{
		a[j] = min;
	}
	return (a);
}
