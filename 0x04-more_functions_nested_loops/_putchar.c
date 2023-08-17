#include <unistd.h>
#include "main"

/**
 * _putchar - write the charatcter c to stdout
 *@c: The character to print
 *
 * Return: on success 1.
 *         on error, -1 is returend, and error is set appropiately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
