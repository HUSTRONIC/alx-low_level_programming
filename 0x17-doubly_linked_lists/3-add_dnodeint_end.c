#include "lists.h"

/**
 * add_dnodeint_end - this function will 
 * adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: the required address of the new element, else  NULL
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw, *a = *head;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->next = NULL;

	if (a)
	{
		while (a->next)
			a = a->next;
		nw->prev = a;
		a->next = nw;
	}
	else
	{
		*head = nw;
		nw->prev = NULL;
	}

	return (nw);
}
