#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the all alphabets followed by new line
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints from a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*prints from A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++
	}
	putchar("\n");

	return (0);
}
