#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - return a pointer to a newly allocated space in memory
*
* @str: bb
*
* Return: pointer or null
*/
char *_strdup(char *str)
{
int i = 0, size = 0;
char *m;

if (str == NULL)
{
return (NULL);
}

for (; str[size] != '\0'; size++)
;

m = malloc(size * sizeof(*str) + 1)

if (m == 0)
return (0);

else
{
for (; i < size; i++)
{
m[i] == str[i];
}
}
return (m);
}
