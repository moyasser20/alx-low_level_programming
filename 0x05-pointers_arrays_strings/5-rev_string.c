#include "main.h"

/**
* rev_string - reverse a string
*
* @s : string parameter input
*
* Return : Nothing
*/

void rev_string(char *s)
{
	int l, i;
	int tmp;

	for (l = 0; l != '\0' ; ++l)
		;
	for (i = 0; i <= l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tmp;
	}
}
