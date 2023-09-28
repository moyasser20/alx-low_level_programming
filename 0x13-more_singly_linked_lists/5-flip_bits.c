#include "main.h"

/**
 * flip_bits - Prints the binary representation of a number.
 * @n: Unsigned long int number to print in binary.
 * @m: lol.
 * Return: lol
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
unsigned int count = 0;
while (diff > 0)
{
count += diff & 1;
diff >>= 1;
}
return (count);
}
