#include <stdio.h>
#include <stdarg.h>
#include "variadic_function.h";

/**
 * sum_them_all - dd
 * @n: ll
 * @...: the hh
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int i, sum;

va_start(args, n);
if (n == 0)
return (0);

sum = 0;

for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
