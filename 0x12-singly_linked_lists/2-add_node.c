#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - adds a new node at the beginning of a list_t list.
* @str: Pointer to string to be duplicated.
* @head: double pointer to head
*
* Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{

list_t *new_node;
char *new_str;
unsigned int len = 0;

new_str = strdup(str);

if (new_str == NULL)
return (NULL);

while (str[len])
len++;

new_node = malloc(sizeof(list_t));
while (new_node == NULL)
{
free(new_str);
return (NULL);
}

new_node->str = new_str;
new_node->len = len;
new_node->next = *head;

*head = new_node;

return (new_node);
}
