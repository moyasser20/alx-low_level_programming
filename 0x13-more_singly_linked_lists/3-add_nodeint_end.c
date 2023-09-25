#include "lists.h"

/**
* add_nodeint_end - function
* @head: jj
* @n: as
* Retunr: pointer
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp = malloc(sizeof(listint_t));
listint_t *ptr;

if (!head || !tmp)
return (NULL);

tmp->next = NULL;
tmp->n = n;

if (!*head)
{
*head = tmp;
}
else
{
ptr = *head;

while (ptr->next)
{
ptr = ptr->next;
}
ptr->next = tmp;
}
return (tmp);
}
