#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: The required linked list to search for
 *
 * Return: The required address else NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t = head;
	listint_t *k = head;

	if (!head)
		return (NULL);

	while (t && k && k->next)
	{
		k = k->next->next;
		t = t->next;
	if (k == t)
	{
		t = head;
	while (t != k)
	{
		t = t->next;
		k = k->next;
	}
	return (k);
	}
	}

	return (NULL);
}
