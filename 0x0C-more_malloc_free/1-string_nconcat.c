#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Concatenates n characters from s2 to s1
 * @s1: First string
 * @s2: Second string
 * @n: Number of characters to concatenate from s2
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, j, s1l, s2l;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (s1l = 0; s1[s1l] != '\0'; s1l++)
;
for (s2l = 0; s2[s2l] != '\0'; s2l++)
;

str = malloc(s1l + n + 1);
if (str == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];

for (j = 0; j < n; j++)
{
str[i] = s2[j];
i++;
}
str[i] = '\0';
return (str);
}
