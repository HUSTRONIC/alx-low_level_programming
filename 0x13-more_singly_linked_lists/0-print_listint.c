#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * of a listint
 * @h: list pointer
 *
 * Return: Required Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		++k;
	}
	return (k);
}
