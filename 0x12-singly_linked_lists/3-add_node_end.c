#include "lists.h"

/**
*add_node_end - dd
*@head: jj
*@str: dd
*Return: newhead
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newhead, *temp;

newhead = malloc(sizeof(size_t));

if (newhead == NULL)
{
return (NULL);
}

newhead->str = strdup(str);

if (newhead->str == NULL)
{
free(newhead);
return (NULL);
}

newhead->len = strlen(str);
newhead->next = NULL;

if (*head == NULL)
{
*head = newhead;
}
else
{
*head = temp;

while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newhead;
}
