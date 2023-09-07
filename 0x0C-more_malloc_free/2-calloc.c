#include "main.h"
#include <string.h>

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: Byte to be set
 * @n: Number of bytes to be set to the value
 *
 * Return: Pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n--)
*s++ = b;

return (ptr);
}

/**
 * _calloc - Allocates memory for an array using malloc and initializes it to 0
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

/* Allocate memory */
arr = malloc(nmemb * size);

if (arr == NULL)
{
return (NULL);
}

/* Set memory to 0 */
_memset(arr, 0, nmemb * size);

return (arr);
}
