#include "main.h"

#include <stdlib.h>

/**
 * argstostr -  function that concatenates all the arguments
 * @ac: input parameter
 * @av: pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int j = 0;
	int k = 0;
	int z = 0;
	int l = 0;

	char *s;

	if (ac == 0 || av == NULL)

		return (NULL);

	for (j = 0; j < ac; j++)
	{

		for (k = 0; av[j][k]; k++)

			l++;
	}
	l += ac;
	s = malloc(sizeof(char) * l + 1);

	if (s == NULL)

		return (NULL);

	for (j = 0; j < ac; j++)
	{

	for (k = 0; av[j][k]; k++)
	{
		s[z] = av[j][k];
		z++;
	}
	if (s[z] == '\0')
	{
		s[z++] = '\n';
	}
	}
	return (s);
}
