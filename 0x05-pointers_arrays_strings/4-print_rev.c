#include "main.h"

/**
* print_rev - prints a stirng in reverse, followed by a newline
*
* @s : string parameter to print reversed
*
* Return : Nothing
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
