#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);  /* 0 and 1 are not prime */
}
return (is_prime_helper(n, 2)); /* Call the helper function */
}

/**
 * is_prime_helper - Recursive helper function to check if a number is prime.
 * @n: The number to check.
 * @divisor: The current divisor being checked.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
if (divisor == n)
{
return (1);  /* Base case: Reached the end without finding a divisor */
}
if (n % divisor == 0)
{
return (0);  /* @n is divisible by @divisor, not prime */
}
return (is_prime_helper(n, divisor + 1));
}
