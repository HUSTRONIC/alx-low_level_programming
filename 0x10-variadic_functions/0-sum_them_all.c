#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of arguments to be passed to the function
 * Return: 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list k;
	int sum = 0;
	unsigned int z;

	va_start(k, n);

	for (z = 0; z < n; z++)
	{
		sum += va_arg(k, int);
	}

	va_end(k);

	return (sum);
}
