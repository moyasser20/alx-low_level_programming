#include "function_pointers.h"
/**
 * array_iterator - bbe
 * @array: ff
 * @size: gg
 * @action: gg
 * Return: Always 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *end = array + size - 1;
if (array && size && action)
while (array <= end)
action(*array++);
}
