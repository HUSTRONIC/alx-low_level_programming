#include "lists.h"

/**
 * reverse_listint - function that reverses a list
 * @head: pointer to the first node in the list
 *
 * Return: pointer that points to the first node
 * in the newly created list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *k = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = k;
		k = *head;
		*head = next;
	}
	*head = k;

	return (*head);
}
