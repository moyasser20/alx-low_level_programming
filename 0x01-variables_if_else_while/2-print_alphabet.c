#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase followed by new line
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
