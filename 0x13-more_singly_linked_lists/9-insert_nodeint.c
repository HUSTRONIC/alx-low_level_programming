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
	unsigned int z = 0;
	listint_t *f = *head;
	listint_t *k = malloc(sizeof(listint_t));

	if (!k)
		return (NULL);

	for (z = 0; f && z < idx - 1; z++)
	{
		f = f->next;
	}
	if (z < idx)
	{
		free(k);
		return (NULL);
	}

	k->n = n;
	if (idx == 0)
	{
		k->next = *head;
		*head = k;
	}
	else
	{
		k->next = f->next;
		f->next = k;
	}

	return (k);
}
