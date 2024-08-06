#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the
 * head node of a listint_t linked list.
 * @head: double pointer to the head of the list.
 *
 * Return: the head node’s data (n) or 0 if empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	num = temp->n;
	*head = (*head)->next;
	free(temp);

	return (num);
}
