#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* _strlen - returns the length of a string
* @s: input string
* Return: length of the string
*/
int _strlen(char *s)
{
int i = 0;

if (!s)
return (0);

while (*s++)
{
i++;
}
return (i);
}

/**
* print_list - jj
* @h: jj
* Return: always 0
*/

size_t print_list(const list_t *h)
{
size_t c = 0;

while (h)
{
printf("[%d] %s", _strlen(h->str), h->str ? h->str : "(nil)");

h = h->next;
c++;
}
return (c);
}
