#include "main.h"

/**
 * _memset - bbe
 * @s: ff
 * @b: gg
 * @n: ll
 * Return: Always 0
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
