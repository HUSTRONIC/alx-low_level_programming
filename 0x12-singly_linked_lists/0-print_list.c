#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: The pointer to list to be printed.
 *
 * Return: The printed number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t z = 0;

	for (; h; h = h->next, z++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	}

	return (z);
}
