#include "lists.h"
#include <stdio.h>

size_t length_n(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * length_n - Counts pointers in the list.
 * @head: pointer that points to the head of the listint_t to check.
 *
 * Return: 0 else the number of unique nodes in the list.
 */
size_t length_n(const listint_t *head)
{
	const listint_t *k, *z;
	size_t w = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	k = head->next;
	z = (head->next)->next;

	while (z)
	{
	if (k == z)
	{
	k = head;
	while (k != z)
	{
	w++;
	k = k->next;
	z = z->next;
	}

	k = k->next;
	while (k != z)
	{
	w++;
	k = k->next;
	}

	return (w);
	}

	k = k->next;
	z = (z->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - function that prints a list
 * @head: pointer that points to the pointer of the list.
 *
 * Return: number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t w, index = 0;

	w = length_n(head);

	if (w == 0)
	{
	for (; head != NULL; w++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}

	else
	{
	for (index = 0; index < w; index++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (w);
}
