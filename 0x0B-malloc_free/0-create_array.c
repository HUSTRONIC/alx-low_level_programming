#include "main.h"

#include <stdlib.h>

/**
 * create_array -  function that creates an array of chars
 * @size: size of array of unsigned int type
 * @c: char type
 * Description: creat array of size size and assign char c
 * Return: pointer to array created, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)

{

	char *s;

	unsigned int i;



	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)

		return (NULL);



	for (i = 0; i < size; i++)

		s[i] = c;

	return (s);
}

