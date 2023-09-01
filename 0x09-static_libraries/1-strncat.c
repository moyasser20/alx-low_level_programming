#inlcude "main.h"

/**
* _strcat - Function that concatenates two string
*
* @dest: Pointer to destination qinput
* @src : Pointer to source input
* @n : the number bytes from characters @src
*
* Return: @dest
*
*/

char *_strcat(char *dest, char *src, int n)
{
int c, i;

c = 0;
while (dest[c])
{
c++;
}
for (i = 0; i < n && str[i] != '\0'; i++)
{
dest[c + i] = src[i];
}
dest[c + i] = '\0';

return (dest);

}
