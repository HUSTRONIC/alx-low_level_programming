#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the
 * nth node of a list
 * @head: struct pointer
 * @index: Node index
 *
 * Return: the required nth node of a linked list else Null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z = 0;

	for (z = 0; head; z++)
	{
		if (z == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
