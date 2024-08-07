#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverse listint_t
 * @head: double pointer to head node.
 *
 * Return: head of reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
