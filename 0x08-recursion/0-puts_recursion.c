#include "main.h"

/**
 * _puts_recursion - function that print the string by recursion
 *
 *@s:dd
 *
 * Return: void
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
}
else
{
putchar(*s);
_puts_recursion(s + 1);
}
}
