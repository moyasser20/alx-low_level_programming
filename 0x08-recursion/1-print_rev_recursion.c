#include "main.h"

/**
 * _print_rev_recursion - function the print the string reversed by recursion
 *
 * @s: ss
 * Return: void
*/
void _print_rev_recursion(char *s)
{
if (*s > '\0')
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
