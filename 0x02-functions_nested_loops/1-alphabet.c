include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print the alphabets
 *
*/

void print_alphabet(void)
{
char ch = 'a';

while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
}
