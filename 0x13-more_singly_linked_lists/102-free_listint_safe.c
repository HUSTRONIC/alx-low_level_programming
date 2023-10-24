#include "lists.h"

/**
 * free_listint_safe - function that frees a list
 * @h: pointer that points the node
 *
 * Return: The required number of elements.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t m = 0;
	int z;
	listint_t *w;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		z = *h - (*h)->next;
		if (z > 0)
		{
		w = (*h)->next;
		free(*h);
		*h = w;
		m++;
		}
		else
		{
		free(*h);
		*h = NULL;
		m++;
		break;
		}
	}
	*h = NULL;

	return (m);
}
