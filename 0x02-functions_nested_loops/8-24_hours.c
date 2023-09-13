#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * Return: void
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		_putchar(i / 10 + '0');
		_putchar(i / 10 + '0');
		putchar(':');
		_putchar(j / 10 + '0');
		_putchar(j / 10 + '0');
		putchar('\n');
	}
}
