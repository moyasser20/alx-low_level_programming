#include "main.h"

/**
* _memscpy - copies memory size
*
* @dest: pointer to choose the constant to copy
* @src: constanthat copy to
* @n: number of max bytes
*
* Return: Pointer dest
*/

char *_memscpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
dest[a] = src[a];
}

return (dest);
}
