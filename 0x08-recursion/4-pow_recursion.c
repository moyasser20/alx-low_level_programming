#include "main.h"

/**
 * _pow_recursion - return the power of a two given number by recurison
 *@x: ss
 *@y: bb
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 1)
{
return (x);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1))
}
