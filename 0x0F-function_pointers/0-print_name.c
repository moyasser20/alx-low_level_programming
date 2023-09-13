#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - fuction
* @name: jj
* @f: dd
* Return: Void
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}

