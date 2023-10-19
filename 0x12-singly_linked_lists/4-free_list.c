#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: points to the head.
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

