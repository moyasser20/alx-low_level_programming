#include "lists.h"
/**
 * _strlen - return the length
 * @s: lol
 * Return: lol
*/

int _strlen(char *s)
{
int i = 0;
if (!s)
return (0);
while (*s++)
i++;
return (i);
}
/**
 * print_list - lol
 * @h: lol
 *
 * Return: always 0
*/


size_t print_list(const list_t *h)
{
size_t count = 0;
while (h)
{
printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
count++;
}
return (count);
}
