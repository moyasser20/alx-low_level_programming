#include "main.h"

/**
 * _sqrt_helper - Helper function to find the square root recursively.
 * @n: The number to find the square root of.
 * @start: The starting value for the search range.
 * @end: The ending value for the search range.
 *
 * Return: The square root of the number if found, -1 otherwise.
 */
int _sqrt_helper(int n, int start, int end)
{
if (start > end)
{
return (-1);
}

int mid;
mid = ((start + end) / 2);

if (mid  *mid == n)
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
 * _sqrt_recursion - Calculates the square root of a number recursively.
 * @n: The number to find the square root of.
 *
 * Return: The square root of the number if found, -1 otherwise.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}

return (_sqrt_helper(n, 0, n));
}
