#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to head node.
 * @index: index of node starting at 0.
 *
 * Return: 1 on sucess or -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp, *trav;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (trav != NULL && count < index)
	{
		trav = temp;
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (-1);

	trav->next = temp->next;
	free(temp);

	return (1);
}
