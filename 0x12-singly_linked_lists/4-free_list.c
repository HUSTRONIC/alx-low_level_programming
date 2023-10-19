#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list to be freed.
 */
void free_list(list_t *head)
{
	list_t *p;

	for (p = head; head; head = p)
	{
		p = head->next;
		free(head->str);
		free(head);
	}
}

