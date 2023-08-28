#include "main.h"

/**
 * _strchr - bbe
 * @s: ff
 * @c: gg
 * Return: Always 0
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
