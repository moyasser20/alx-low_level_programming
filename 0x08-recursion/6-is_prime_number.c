#include "main.h"

/**
 * is_prime_number - bbe
 * @n: ff
 * @othern: number
 * Return: Always 0
*/
int checkprime(int n, int othern);
int is_prime_number(int n)
{
return (checkprime(n, 2));
}
/**
 * checkprime - bbe
 * @n: rf
 * @othern: number
 * Return: Always 0
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
