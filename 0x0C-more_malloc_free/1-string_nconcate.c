#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - bbe
 * @s1: ff
 * @s2: gg
 * @n: bo
 * Return: Always 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, len, len1, len2;
char *ptr;
while (*s1 != '\0')
{
len1++;
s1++;
}
while (*s2 != '\0')
{
len2++;
s2++;
}
if (len2 <= n)
{
n = len2;
}
len = len1 + n + 1;
ptr = malloc(sizeof(char) * len);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
ptr[i] = s1[i];
}
for (j = 0; j < n; j++)
{
ptr[i + j] = s2[j];
}
return (ptr);
}
