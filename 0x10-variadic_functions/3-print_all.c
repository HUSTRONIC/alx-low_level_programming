#include "variadic_functions.h"

/**
 * print_all -  function that prints anything.
 * @format: parameters passed to the function.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{	va_list v;
	unsigned int i = 0;
	int k;
	int c = 0;
	char *stng;
	const char t_arg[] = "cifs";

	va_start(v, format);
	while (format && format[i])
	{
		for (k = 0; t_arg[k] k++)
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			}
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(v, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(v, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(v, double)), c = 1;
			break;
		case 's':
			stng = va_arg(v, char *), c = 1;
			if (!stng)
			{
				printf("(nil)");
				break;
			}
			printf("%s", stng);
			break;
		} i++;
	}
	printf("\n"), va_end(v);
}
