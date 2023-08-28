#include "main.h"

/**
 * print_chessboard - bbe
 * @a: ff
 * Retrun: nothing
*/

void print_chessboard(char (*a)[8])
{
int n, r;

for (n = 0; n < 8; n++)
{
for (r = 0; r < 8; r++)
{
_putchar(a[n][r]);
}
_putchar('\n');
}
}
