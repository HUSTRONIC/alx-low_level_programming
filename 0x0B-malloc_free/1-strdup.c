#include <stdio.h>

#include <stdlib.h>

#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: character type
 * Return: string lneth
 */

char *_strdup(char *str)

{

	char *a;

	int i, k = 0;



	if (str == NULL)

		return (NULL);

	i = 0;

	while (str[i] != '\0')

		i++;



	a = malloc(sizeof(char) * (i + 1));



	if (a == NULL)

		return (NULL);



	for (k = 0; str[k]; k++)

		a[k] = str[k];



	return (a);

}
