#include "lists.h"

/**
 * free_listint2 -  function that frees a list
 * @head: Points to the address of the
 * list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *v;

	if (!head)
		return;
	for (v = *head; v;)
	{
		v = (*head)->next;
		free(*head);
		*head = v;
	}
	*head = NULL;
}
