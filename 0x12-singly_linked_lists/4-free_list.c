#include "lists.h"

/**
 * free_list - lol
 * @head: lol
 * Return: always 0
*/


void free_list(list_t *head)
{
list_t *current;
while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}
}
