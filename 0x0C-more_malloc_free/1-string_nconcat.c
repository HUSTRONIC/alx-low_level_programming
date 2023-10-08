#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: input parameter
 * @s2: input parameter
 * @n: input parameter
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int z;
	unsigned int j;
	unsigned int k;
	char *s;

	if (s1 == NULL)
		z = 0;
	else
	{
		for (z = 0; s1[z]; z++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < z; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + z] = s2[k];
	s[z + j] = '\0';
	return (s);
}
