#include "variadic_functions.h"

/**
 * print_strings -  function that prints strings,
 * followed by a new line.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i;
	char *stng;

	va_start(v, n);

	j = 0;
	while (j < n;)
	{
		stng = va_arg(v, char *);

		if (stng)
			printf("%s", stng);
		else
			printf("(nil)");

		if (j < n - 1)
			if (separator)
				printf("%s", separator);
		j++;

	}

	printf("\n");
	va_end(v);
}
