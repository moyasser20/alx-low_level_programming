#include "main.h"

/**
* more_numbers - print 0 - 14 ten times
* and you can only use _putchar twice
*
* Return: Always 0 (success)
*/

void more_numbers(void)
{
int i, num, count;

for (i = 0; i <= 10; i++)
{
for (int count = 0; count <= 14; count++)
{
num = count;
if (count > 9)
_putchar(1 + 48);
num = count % 10;
}
_putchar(num + 48);
}
_putchar('\n');
}
}
