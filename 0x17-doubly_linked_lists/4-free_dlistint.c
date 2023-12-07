#include "lists.h"

/**
 * free_dlistint - the function will
 * frees a dlistint_t list.
 * @head: pointer to the list.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ac_node;
	dlistint_t *nt_node;

	if (head)
	{
		ac_node = head;
		nt_node = head->next;
		while (nt_node)
		{
			free(ac_node);
			ac_node = nt_node;
			nt_node = nt_node->next;
		}
		free(ac_node);
	}
}
