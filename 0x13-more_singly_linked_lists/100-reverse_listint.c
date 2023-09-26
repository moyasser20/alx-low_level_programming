#include "lists.h"

/**
* reverse_listint - jj
* @head: ss
* Return: ll
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *node = NULL, *next = NULL;

if (!*head || !head)
return (0);

node = *head;
*head = NULL;

while (node)
{
next = node->next;
node->next = *head;
*head = node;
node = next;
}
return (*head);
}
