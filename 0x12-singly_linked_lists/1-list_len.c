#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: pointer to be used
 *
 * Return: count of number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t k = 0;

	for (; h; h = h->next, k++)
	{

	}
	return (k);
}

