#include "lists.h"

/**
 * get_dnodeint_at_index - this function will return the nth node.
 * @head: pointer to the list.
 * @index: nth node.
 * Return: nth node, if the node doesn't exist, returns NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *n = head;
	unsigned int ct = 0;

	while (n && ct != index)
	{
		ct++;
		n = node->next;
	}
	if (n && ct == index)
		return (n);
	return (NULL);
}
