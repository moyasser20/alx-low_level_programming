#include "main.h"

/**
* _strspn - fills memory with a constant type
*
* @s: pointer to choose the constant to copy
* @accept: constan that copy to
*
* Return: Pointer number of bytes
*/

unsigned int  _strspn(char *s, char *accept)
{
int i;
int n;

for (i = 0; s[i] != '\0'; i++)
{
for (n = 0; accept[n] != s[i]; n++)
{
if (accept[n] == '\0')
{
return (i);
}
}
}
return (i);
}
