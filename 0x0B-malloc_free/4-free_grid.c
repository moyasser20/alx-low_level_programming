#include "main.h"

/**
* free_grid - bb
* @grid: pointer
* @height:bb
* Return: void
*/

void free_grid(int **grid, int height)
{
int i = 0;

for (; i < height; i++)
{
free(grid[i]);
}
free(grid);
}


