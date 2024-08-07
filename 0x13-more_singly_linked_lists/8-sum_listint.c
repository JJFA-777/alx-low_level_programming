#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - a function that returns the
 * sum of all the data (n) of a listint_t linked list.
 * @head: pointer to head node.
 *
 * Return: sum or 0 if head is NULL.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
