#include "lists.h"

/**
 * sum_dlistint - This function returns the sum of all the data.
 * @head: The required pointer to the list.
 * Return: sum of all data in the list, 0 if the lost is empty.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nd = head;
	int sm = 0;

	while (nd)
	{
		sm += nd->n;
		nd = nd->next;
	}

	return (sm);
}
