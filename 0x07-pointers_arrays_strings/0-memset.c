#include "main.h"

/**
* _memset - fills memory with a constant type
*
* @s: pointer to choose the constant
* @b: constant
* @n: number of max bytes
*
* Return: Pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
int itr;

for (itr= 0; n > 0; itr++, n--)
{
s[itr] = b;
}

return (s);
}
