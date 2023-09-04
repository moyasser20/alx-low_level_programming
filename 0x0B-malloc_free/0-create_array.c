#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* create_array - prints an array by malloc
*
* @size: bb
* @c: cc
*
* Return: pointer or null
*/
char *create_array(unsigned int size, char c)
{
char *n = malloc(size);


if (size == 0 || n == 0)
{
return (NULL);
}

while (size--)
{
n[size] = c;
}

return (n);
}
