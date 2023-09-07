#include "main.h"
#include <stdlib.h>
/**
 * array_range - bbe
 * @min: ff
 * @max: gg
 * Return: Always 0
*/

int *array_range(int min, int max)
{
int *array, size, i;
if (min > max)
return (NULL);
size = max - min + 1;
array = malloc(sizeof(int) * size);
if (array != NULL)
{
for (i = 0; i < size; i++)
{
array[i] = min + i;
}
}
return (array);
}
