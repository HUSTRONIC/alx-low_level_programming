#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: input parameter
 * Return: (1) fpr true (0) for false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);

	}
	else
	{
		return (0);

	}

}
