#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a char
 * @separator: the separator to print
 * @ap: the argument pointer
 */
void print_char(char *separator, va_list ap)
{
printf("%s%c", separator, va_arg(ap, int));
}

/**
 * print_int - prints an int
 * @separator: the separator to print
 * @ap: the argument pointer
 */
void print_int(char *separator, va_list ap)
{
printf("%s%d", separator, va_arg(ap, int));
}

/**
 * print_float - prints a float
 * @separator: the separator to print
 * @ap: the argument pointer
 */
void print_float(char *separator, va_list ap)
{
printf("%s%f", separator, va_arg(ap, double));
}

/**
 * print_string - prints a string
 * @separator: the separator to print
 * @ap: the argument pointer
 */
void print_string(char *separator, va_list ap)
{
char *str = va_arg(ap, char *);

if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
}

/**
 * print_all - prints anything
 * @format: the list of types of arguments passed to the function
 * @...: the arguments to print
 */
void print_all(const char * const format, ...)
{
va_list ap;
int i = 0;
int j;
char *separator = "";
token_t tokens[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
};

va_start(ap, format);

while (format && format[i])
{
j = 0;
while (tokens[j].token)
{
if (format[i] == tokens[j].token[0])
{
tokens[j].f(separator, ap);
separator = ", ";
break;
}
j++;
}
i++;
}

printf("\n");

va_end(ap);
}
