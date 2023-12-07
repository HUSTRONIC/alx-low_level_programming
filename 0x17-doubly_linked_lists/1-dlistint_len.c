#include "lists.h"

/**
 * dlistint_len - this will return the required number of elements.
 * @h: the required pointer to the list.
 * Return: number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t z = 0;

	while (node)
	{
		z++;
		node = node->next;
	}

	return (z);
}
