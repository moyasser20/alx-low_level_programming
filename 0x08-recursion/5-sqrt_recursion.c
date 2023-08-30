#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of @n.
 * If @n does not have a natural square root, returns -1.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);  /* Negative numbers don't have a natural square root */
}
if (n == 0 || n == 1)
{
return (n);  /* Base case: square root of 0 or 1 is the number itself */
}
return (sqrt_helper(n, 1));  /* Call the helper function */
}

/**
 * sqrt_helper - Recursive helper function to calculate the square root.
 * @n: The number to calculate the square root of.
 * @i: The current number being checked.
 *
 * Return: The square root of @n.
 * If @n does not have a natural square root, returns -1.
 */
int sqrt_helper(int n, int i)
{
if (i * i == n)
{
return (i);  /* Found the square root */
}
if (i * i > n)
{
return (-1);  /* @n does not have a natural square root */
}
return (sqrt_helper(n, i + 1));  /* Recursive call to check the next number */
}
