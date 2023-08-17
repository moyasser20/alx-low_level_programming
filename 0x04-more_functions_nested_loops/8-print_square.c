#include "main.h"

/**
* print_square - print  a square
*
* @size: size of the square
*/

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
for (int i = 1; i < size; i++)
{
for (int j = 1; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
