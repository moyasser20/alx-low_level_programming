#include "lists.h"

/**
* pop_listint - sss
* @head: ggg
* Return: n
*/
int pop_listint(listint_t **head)
{
listint_t *tmp;
int n;

if (!head)
{
return (0);
}
tmp = (*head)->next;
n = (*head)->n;
free(*head);
*head = tmp;
return (n);
}

