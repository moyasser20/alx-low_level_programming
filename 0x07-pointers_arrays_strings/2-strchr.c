#include "main.h"

/**
* _strchr - fills memory with a constant type
*
* @s: pointer to put the constant
* @c: constant
*
* Return: Pointerto s or null
*/

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] >= '\0' ; n++)
	{
		if (s[n] == c)
		{
			return (s + itr);
		}
	}
	return ('\0');
}
