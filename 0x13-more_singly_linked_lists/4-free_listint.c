#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to a listint_t head
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *temp, *trav;

	temp = head;

	while (temp != NULL)
	{
		trav = temp->next;
		free(temp);
		temp = trav;
	}
}
