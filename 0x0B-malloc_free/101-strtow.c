#include <stdlib.h>

#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string parameter
 *  Return: number of words
 */

int count_word(char *s)
{
	int f;
	int d;
	int w;

	f = 0;
	w = 0;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (s[d] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}
	return (w);
}

/**
 * **strtow - seperates string into words
 * @str: string parameter
 * Return: pointer to an array of strings (Success), NULL (Error)
 */

char **strtow(char *str)
{
	char **z;
	char *tmp;

	int j, k = 0, lengt = 0, w, c = 0, start, end;

	while (*(str + lengt))
		lengt++;
	w = count_word(str);

	if (w == 0)
		return (NULL);
	z = (char **) malloc(sizeof(char *) * (w + 1));

	if (z == NULL)
		return (NULL);

	for (j = 0; j <= lengt; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (c)
			{
				end = j;

				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				z[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = j;
	}
	z[k] = NULL;
	return (z);
}
