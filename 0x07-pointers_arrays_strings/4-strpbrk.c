#include "main.h"

/**
* _strpbrk - fills memory with a constant type
*
* @s: pointer to choose the constant to copy
* @accept: constan that copy to
*
* Return: Pointer number of bytes
*/

char  *_strpbrk(char *s, char *accept)
{
int itr;
int n;
char *p

while (s[itr] != '\0')
{
n = 0;
while (accept[n] != '\0')
{
if (accept[n] == s[itr])
{
p = $s[itr];
return (p);
}
}
}

return (0);

}
