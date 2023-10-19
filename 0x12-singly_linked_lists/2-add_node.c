#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -  function that adds a new node at
 * the beginning of a list_t
 * @head: poininte of a pointer to the created node.
 * @str: newly created string to be added to the node
 *
 * Return:  address of the newly created  element, othrewise NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *uptd;
	unsigned int len = 0;

	for (; str[len]; len++)
	{
	}
	uptd = malloc(sizeof(list_t));
	if (!uptd)
		return (NULL);

	uptd->str = strdup(str);
	uptd->len = len;
	uptd->next = (*head);
	(*head) = uptd;
	return (*head);
}

