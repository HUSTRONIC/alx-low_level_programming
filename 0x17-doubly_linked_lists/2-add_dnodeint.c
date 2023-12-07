#include "lists.h"

/**
 * add_dnodeint - this is a function that adds a
 * new node at the beginning of a list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element, otherwise  NULL
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->prev = NULL;
	nw->next = *head;
	if (*head)
		(*head)->prev = nw;
	*head = nw;

	return (nw);
}
