#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position.
 * @head: Pointer that points to the address of a list
 * @idx: Index of the list where new node should be added
 * @n: The integer to be stored in the newly created node
 *
 * Return:The required address of the
 * newly created node else Null.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k = 0;
	listint_t *z = *head;
	listint_t *m = malloc(sizeof(listint_t));

	if (!m)
		return (NULL);
	while (*head && idx)
	{
		if (!z)
			return (NULL);
		if (k == idx - 1)
			break;
		z = z->next;
		++k;
	}
	m->n = n;
	if (idx)
	{
		m->next = z->next;
		z->next = m;
	}
	else
	{
		m->next = z;
		*head = m;
	}
	return (m);
}
