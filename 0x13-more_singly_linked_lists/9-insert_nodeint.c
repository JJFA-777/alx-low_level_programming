#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  function that inserts
 * a new node at a given position.
 * @head: pointer to head node.
 * @idx: index of node starting at 0.
 * @n: number value in struct
 *
 * Return: node at nth index or 0.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *node, *trav;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	trav = *head;

	while (trav != NULL && count < idx - 1)
	{
		trav = trav->next;
		count++;
	}

	if (trav == NULL || count != idx - 1)
	{
		free(node);
		return (NULL);
	}

	node->next = trav->next;
	trav->next = node;

	return (node);
}
