#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: Pointer that points to the struct
 *
 * Return: data for the head of the node
 * 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int k = 0;

	if (*head)
	{
		k = (*head)->n;
		h = (*head)->next;
		free(*head);
		*head = h;
	}
		return (k);
}
