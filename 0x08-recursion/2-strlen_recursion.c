#include "main.h"

/**
 * _strlen_recursion - function that return the string length by recursion
 *
 * @s: ss
 *
 * Return: Always length l
*/
int _strlen_recursion(char *s)
{
int l = 0;

if (*s > '\0')
{
l += _strlen_recursion(s + 1) + 1;
}

return (l);
}
