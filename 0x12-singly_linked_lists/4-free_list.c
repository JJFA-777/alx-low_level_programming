#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: pointer to a list_t head
 *
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *temp, *trav;

	temp = head;

	while (temp != NULL)
	{
		trav = temp->next;
		free(temp->str);
		free(temp);
		temp = trav;
	}
}

