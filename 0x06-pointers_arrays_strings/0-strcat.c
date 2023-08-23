#inlcude "main.h"

/**
* _strcat - Function that concatenates two string
*
* @dest: Pointer to destination input
* @src : Pointer to source input
*
* Return: Returns pointer to resulting string @dest
*
*/

char *_strcat(char *dest, char *src)
{
int c, c1;

c = 0;
while (dest[c])
{
c++;
}
for (c2 = 0; str[c1]; c1++)
{
dest[c++] = src[c2];
}

return (dest);

}
