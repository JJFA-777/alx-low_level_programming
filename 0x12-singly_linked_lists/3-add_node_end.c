#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @str: Pointer to string to be duplicated.
 * @head: double pointer to head
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *trav;
	char *new_str;
	unsigned int len = 0;

	new_str = strdup(str);
	if (new_str == NULL || head == NULL)
		return NULL;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new_str);
		return NULL;
	}

	new->str = new_str;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		trav = *head;
		while (trav->next != NULL)
			trav = trav->next;
		trav->next = new;
	}

	return (new);
}

