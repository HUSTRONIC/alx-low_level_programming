#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list.
 * @head: pointer of a pointer for the list
 * @str: The string to put in the new node.
 *
 * Return: Adress to the created list,else NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *updt;
	list_t *h = *head;
	unsigned int len = 0;

	for (; str[len]; len++)
	{
	}

	updt = malloc(sizeof(list_t));
	if (!updt)
		return (NULL);

	updt->str = strdup(str);
	updt->len = len;
	updt->next = NULL;

	if (*head == NULL)
	{
		*head = updt;
		return (updt);
	}

	for (; h->next; h = h->next)
	{

	}

	h->next = updt;

	return (updt);
}

