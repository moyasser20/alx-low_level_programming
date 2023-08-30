#include "main.h"

/**
 * _sqrt_helper - bbe
 * @n: ff
 * @start: gg
 * @end: gg
 * Return: Always 0
*/
int _sqrt_helper(int n, int start, int end)
{
if (start > end)
{
return (-1);
}
int mid;
mid = ((start + end) / 2);
if (mid *mid == n)
{
return (mid);
}
else if (mid *mid > n)
{
return (_sqrt_helper(n, start, mid - 1));
}
else
{
return (_sqrt_helper(n, mid + 1, end));
}
}

/**
 * _sqrt_recursion - bbe
 * @n: ff
 * Return: Always 0
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_helper(n, 0, n));
}
