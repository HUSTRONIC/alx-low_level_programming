#include "main.h"

/**
 * get_endianness - the program that checks the endianness
 * of a given function
 *
 * Return: 0 else 1
 */
int get_endianness(void)
{
	int k;
	char *j;

	k = 1;
	j = (char *)&k;
	return (*j);
}

