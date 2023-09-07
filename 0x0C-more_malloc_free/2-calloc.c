#include "main.h"
#include <string.h>
/**
* _memset - gg
*
* @s: bb
* @b: dd
* @n: nn
*
* Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n--)
*s++ = b;

return (ptr);
}


/**
* _calloc - gg
*
* @nmemb: hh
* @size: ss
*
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr;

if (nmeb == 0 || size == 0)
{
return (NULL);
}

arr = malloc(sizeof(int *nmeb));

if (arr == 0)
{
return (NULL);
}
_memset(arr, 0, sizeof(int) * nmeb);

return (m);

}
