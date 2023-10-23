#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the
 * beginning of a list
 * @head: Pointer to address of a list
 * @n: variable required to store the node
 *
 * Return: Required adressn of new element, else
 * NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *k = malloc(sizeof(listint_t));

	if (!k)
		return (NULL);
	k->n = n;
	k->next = *head;
	*head = k;

	return (*head);
}

