#include "lists.h"

/**
 * sum_listint - function that returns the
 * sum of all the data (n) of a list
 * @head: struct pointer
 *
 * Return: the required Sum of all data else 0 if empty list
 */
int sum_listint(listint_t *head)
{
	int z = 0;

	for (; head != NULL; head = head->next)
	{
		z += head->n;
	}
	return (z);
}
