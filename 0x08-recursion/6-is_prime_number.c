#include "main.h"

/**
 * checkprime - Checks if a number is prime.
 * @n: The number to check.
 * @othern: The current divisor to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int checkprime(int n, int othern);

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
return (checkprime(n, 2));
}

/**
 * checkprime - Recursive helper function to check primality.
 * @n: The number to check.
 * @othern: The current divisor to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int checkprime(int n, int othern)
{
if (othern >= n && n > 1)
return (1);
else if (n % othern == 0 || n <= 1)
return (0);
else
return (checkprime(n, othern + 1));
}
