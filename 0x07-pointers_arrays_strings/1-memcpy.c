#include "main.h"

/**
 * _memcpy - bbe
 * @dest: ff
 * @src: gg
 * @n: gg
 * Return: Always 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_ptr = dest;
char *src_ptr = src;

while (n--)
{
*dest_ptr++ = *src_ptr++;
}
return (dest);
}
