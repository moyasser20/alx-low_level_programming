#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - ss
 * @separator: jj
 * @n: kk
 * @...: aa
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list num;
int i;

if (!n)
{
printf("\n");
return;
}

va_start(num, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(num, int));
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}

if (separator == NULL)
{
printf("\n");
}

va_end(num);
}
