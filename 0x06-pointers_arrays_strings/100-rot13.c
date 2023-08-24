#inlcude "main.h"

/**
 * rot13 - encoded string using rot13
 *
 * @s: input string
 *
 * Return: string that encoded
*/

char *rot13(char *s)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "opqrstuvwxyzabcdefghijklmnOPQRSTUVWXYZABCDEFGHUJKLMN";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
		}
		s++;
	}
	return (ptr);

}
