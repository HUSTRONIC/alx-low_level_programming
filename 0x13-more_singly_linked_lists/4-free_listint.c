#include "lists.h"

/**
 * free_listint -  function that frees a list
 * @head: struct pointer
 */
void free_listint(listint_t *head)
{
	listint_t *k;

	for (k = head; k != NULL;)
	{
		k = head->next;
		free(head);
		head = k;
	}
}
