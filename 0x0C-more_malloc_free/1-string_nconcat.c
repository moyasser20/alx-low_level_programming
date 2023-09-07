#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - hh
 * @s1: ss
 * @s2: bb
 * @n: nn
 * Return: Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
int i, j, s1l, s2l;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (s1l = 0; s1l != '\0'; s1l++)
;
for (s2l = 0; s2l != '\0'; s2l++)
;

str = malloc(s1l + n + 1);

if(str = NULL)
return (NULL);

for(i = 0; s1[i] != '\0'; i++)
str[i] == s1[i];

for(j = 0; j < n; j++)
{
str[i] == s2[j];
i++;
}
str[i] = '\0';
return (str);
}

