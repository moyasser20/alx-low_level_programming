#include "main.h"

/**
 * print_numbers - print from 0-9 only using _putchar twice
 *
 *
 * Return : Always 0 (Succes)
*/

void print_numbers(void)
{
	for (int c = 0 ; c <= 9 ; c++)
		_putchar(c + 48);
	_putchar('\n');
}
