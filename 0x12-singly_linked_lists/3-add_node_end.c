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
list_t *new_node, *trav;
char *new_str;
unsigned int len = 0;

new_str = strdup(str);

if (new_str == NULL || head == NULL)
return (NULL);

while (str[len])
len++;

new_node = malloc(sizeof(list_t));
while (new_node == NULL)
{
free(new_str);
return (NULL);
}

if (*head == NULL)
*head = new_node;
else
{
trav = *head;
while (trav->next != NULL)
trav = trav->next;
trav->next = new_node;
new_node->str = new_str;
new_node->len = len;
new_node->next = NULL;
}

return (new_node);
}
