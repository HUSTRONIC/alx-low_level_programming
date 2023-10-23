#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked list
 * @h: list pointer
 *
 * Return: required element number
 */
size_t listint_len(const listint_t *h)
{
	size_t z = 0;

	for (; h; h = h->next)
	{
		++z;
	}

	return (z);
}

