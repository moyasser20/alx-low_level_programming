#inlcude "main.h"

/**
* _strcat - Function that copy string to another like strncpy
*
* @dest: Pointer to destination input
* @src : Pointer to source input
* @n : the number bytes from characters @src
*
* Return: @dest
*
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

while (i < n)
{
dest[i] = '\0';
i++
}
return (dest);
}
