#include <stdio.h>
/**
 * main - entry point
 *i
 * Description: prints the alphabet in lowercase reversed followed by new line
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
