#include "main.h"
/**
* reverse_array - function that print an array revesred
*
* @a: the array input
* @n: the number of values
*
* Return : Nothing
*/
void reverse_array(int *a, int n)
{
int i, j, t;

for (i = 0, j = (n - 1); i < j; i++, j--)
{
t = a[i];
a[i] = a[j];
a[j] = t;

}
}
