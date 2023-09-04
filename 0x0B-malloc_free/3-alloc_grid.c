#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - Allocate a 2D array of integers
*
* @width: Width of the grid
* @height: Height of the grid
*
* Return: Pointer to the allocated grid
*/
int **alloc_grid(int width, int height)
{
int i, j;
int **tab;

tab = malloc(sizeof(*tab) * height);

if (width <= 0 || height <= 0 || tab == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < height; i++)
{
tab[i] = malloc(sizeof(**tab) * width);

if (tab[i] == NULL)
{
while (i--)
free(tab[i]);
free(tab);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
tab[i][j] = 0;
}
}
}

return (tab);
}
