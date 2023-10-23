#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: The pointer that Points
 * to the address of a list
 * @n: The integer value to be added to the newly created
 * node
 *
 * Return: required address of the newly
 * created element, else NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *j = malloc(sizeof(listint_t));
	listint_t *k;

	if (!j)
		return (NULL);

	j->n = n;
	j->next = NULL;

	if (!*head)
	{
		*head = j;
		return (*head);
	}

	 k = *head;

	for (; k->next; k = k->next)
	{
	}

	k->next = j;

	return (j);
}
