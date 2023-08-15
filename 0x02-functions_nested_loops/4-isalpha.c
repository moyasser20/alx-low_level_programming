#include "main.h"

/**
*_islower - function to check if characeter is lowercase
*
* @c: checks input of function
*
* Return: return 1 if 'c' is lower case
* otherwise always 0 (success)
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
if (c >= 65 && c <= 90)
return (1);
return (0);
}
