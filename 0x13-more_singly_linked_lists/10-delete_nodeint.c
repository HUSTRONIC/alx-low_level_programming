#include "lists.h"

/**
 * delete_nodeint_at_index -  function that deletes the node
 * at index index of a list
 * @head: Pointer that pointsto the
 * address of a list
 * @index: node index
 *
 * Return: 1, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int f = 0;
	listint_t *w = *head;
	listint_t *z;

	if (!w)
		return (-1);
	while (*head && index)
	{
		if (!w)
			return (-1);
		if (f == index - 1)
			break;
		w = w->next;
		++f;
	}
	if (index)
	{
		z = w->next->next;
		free(w->next);
		w->next = z;
	}
	else
	{
		*head = (*head)->next;
		free(w);
	}
	return (1);
}
