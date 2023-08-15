#include "main.h"

/**
* times_table - prints the 9 times table
*
* Example Table
* 0, 0, 0, 0, ..
* 0, 1, 2, 3, ..
*
*/

void times_table(void)
{
int n1, n2, prod;

for (n1 = 0 ; n1 <= 9 ; n1++)
{
_putchar(48);
for (n2 = 0 ; n2 <= 9 ; n2++)
{
_putchar(',');
_putchar(' ');
prod = n1 * n2;
/**
* put space if product is a single number
* place the first digit if its two numbers
*/
if (prod <= 9)
_putchar(' ');
else
{_putchar((prod / 10) + 48);} /*get the first digit*/
_putchar((prod % 10) + 48); /*get the second digit*/
}
_putchar('\n');
}
}
