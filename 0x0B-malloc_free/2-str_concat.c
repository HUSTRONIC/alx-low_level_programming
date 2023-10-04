#include "main.h"

#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: array pointer to destination of string
 * @s2: array pointer to source of string
 * Return: return concatinated string
 */

char *str_concat(char *s1, char *s2)
{

	char *k;

	int i, r;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)

		s2 = "";
	i = r = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[r] != '\0')
		r++;

	k = malloc(sizeof(char) * (i + r + 1));
	if (k == NULL)

		return (NULL);

	i = r = 0;

	while (s1[i] != '\0')
	{
		k[i] = s1[i];
		i++;
	}
	while (s2[r] != '\0')
	{

		k[i] = s2[r];
		i++, r++;
	}
	k[i] = '\0';
	return (k);
}
