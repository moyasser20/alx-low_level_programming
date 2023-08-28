#include "main.h"

/**
* _memset - fills memory with a constant type
*
* @s: pointer to choose the constant
* @b: constant
* @n: max number to use
*
* Return: Pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned  int l;

for (l = 0; n > 0; itr++, n--)
{
s[l] = b;
}
return (s);
}
