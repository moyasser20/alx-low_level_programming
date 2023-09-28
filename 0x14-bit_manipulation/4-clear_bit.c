#include "main.h"

/**
 * clear_bit - Prints the binary representation of a number.
 * @n: Unsigned long int number to print in binary.
 * @index: lol.
 * Return: lol
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
*n &= ~(1UL << index);
return (1);
}
