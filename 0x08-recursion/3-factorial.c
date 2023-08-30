#include "main.h"

/**
 * factorial - function that return the factorial of a number by recurision
 *
 * @n: dd
 * Return: factorial of the given number
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (-1);
}

return (n * factorial(n - 1));
}
