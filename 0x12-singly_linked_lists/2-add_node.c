#include "lists.h"

/**
*add_node - ff
* @head:ss
* @str: add
* Return: lol
*/
ist_t *add_node(list_t **head, const char *str)
{
list_t *newhead = malloc(sizeof(size_t));

if (!head || !newhead)
{
return (NULL);
}
if (str)
{
newhead->str = sttdup(str);
if (!newhead->str)
{
free(newhead);
return (NULL);
}
newhead->len = _strlen(newhead->str);
}
newhead->next = *head;
*head = newhead;
return (newhead);
}
